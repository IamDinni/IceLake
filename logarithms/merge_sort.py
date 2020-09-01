def merge_sort(items):
    # Base case: elements in items are less than 2
    if len(items) < 2:
        return items

    # Step 1: Divide the list in half
    mid_index = len(items)//2
    left = items[:mid_index]
    right = items[mid_index:]

    # Step 2: Sort each half
    sorted_left = merge_sort(left)
    sorted_right = merge_sort(right)

    # Step 3: Merge

    sorted_list = []
    left_index = 0
    right_index = 0

    while len(sorted_list) < len(left) + len(right):
        if left_index < len(left) and \
                (right_index == len(right) or sorted_left[left_index] < sorted_right[right_index]):
            sorted_list.append(sorted_left[left_index])
            left_index += 1

        else:
            sorted_list.append(sorted_right[right_index])
            right_index += 1

    return sorted_list
