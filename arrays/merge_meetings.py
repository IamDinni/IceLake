import unittest


def merge_meetings(meetings):
    length = len(meetings)

    # Base case: If there are less than 2 elements,
    if length < 2:
        return meetings

    sorted_meetings = sorted(meetings)

    merged_meetings = [meetings[0]]

    # Meetings are overlapped if,
    # end_time of first is after start_time of second

    # Edge cases:
    # 1. end_time of first is equal to start_time of second
    # [(1, 2), (2, 3)]

    # 2. second meeting ends before first meeting ends
    # [(1, 5), (2, 3)]

    for current_meeting_start, current_meeting_end in sorted_meetings[1:]:

        # Last meeting which is merged
        last_merged_meeting_start, last_merged_meeting_end = merged_meetings[-1]

        if last_merged_meeting_end >= current_meeting_start:
            merged_meetings[-1] = (last_merged_meeting_start,
                                   max(last_merged_meeting_end, current_meeting_end))

        else:
            merged_meetings.append(
                (current_meeting_start, current_meeting_end))

    return merged_meetings


# Tests

class Test(unittest.TestCase):

    def test_meetings_overlap(self):
        actual = merge_meetings([(1, 2), (2, 4)])
        expected = [(1, 4)]
        self.assertEqual(actual, expected)

    def test_meetings_touch(self):
        actual = merge_meetings([(5, 6), (6, 8)])
        expected = [(5, 8)]
        self.assertEqual(actual, expected)

    def test_meeting_contains_other_meeting(self):
        actual = merge_meetings([(1, 8), (2, 5)])
        expected = [(1, 8)]
        self.assertEqual(actual, expected)

    def test_meetings_stay_separate(self):
        actual = merge_meetings([(1, 3), (4, 8)])
        expected = [(1, 3), (4, 8)]
        self.assertEqual(actual, expected)

    def test_multiple_merged_meetings(self):
        actual = merge_meetings([(1, 4), (2, 5), (5, 8)])
        expected = [(1, 8)]
        self.assertEqual(actual, expected)

    def test_meetings_not_sorted(self):
        actual = merge_meetings([(5, 8), (1, 4), (6, 8)])
        expected = [(1, 4), (5, 8)]
        self.assertEqual(actual, expected)

    def test_one_long_meeting_contains_smaller_meetings(self):
        actual = merge_meetings([(1, 10), (2, 5), (6, 8), (9, 10), (10, 12)])
        expected = [(1, 12)]
        self.assertEqual(actual, expected)

    def test_sample_input(self):
        actual = merge_meetings([(0, 1), (3, 5), (4, 8), (10, 12), (9, 10)])
        expected = [(0, 1), (3, 8), (9, 12)]
        self.assertEqual(actual, expected)


unittest.main(verbosity=2)
