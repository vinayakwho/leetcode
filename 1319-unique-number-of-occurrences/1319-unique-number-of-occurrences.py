class Solution:
    def uniqueOccurrences(self, arr):
        # Step 1: Sort the array
        arr.sort()
        
        # Step 2: Count occurrences
        occurrences = []
        count = 1
        
        for i in range(1, len(arr)):
            if arr[i] == arr[i - 1]:
                count += 1
            else:
                occurrences.append(count)
                count = 1
        occurrences.append(count)  # Append the count of the last element
        
        # Step 3: Sort occurrences and check for uniqueness
        occurrences.sort()
        
        for i in range(1, len(occurrences)):
            if occurrences[i] == occurrences[i - 1]:
                return False
        
        return True