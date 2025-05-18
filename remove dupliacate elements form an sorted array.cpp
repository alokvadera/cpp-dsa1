 int i = 1, j = 0;
    while (i < nums.size()) {
      if (nums[j] == nums[i])
        ++i;
      else
        nums[++j] = nums[i++];
      //   else{
      //       j++;
      //       nums[j]=nums[i];
      //       i++;
      //   }
    }
    return j + 1;
