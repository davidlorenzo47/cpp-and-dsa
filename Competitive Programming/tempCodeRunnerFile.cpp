    vector<int> vec;
    int i = 0, j = numbers.size() - 1;

    while (i < j)
    {
        if (numbers[i] + numbers[j] < target)
        {
            i++;
        }
        if (numbers[i] + numbers[j] > target)
        {
            j--;
        }
        else
        {
            vec.push_back(i+1);
            vec.push_back(j+1);
            display(vec);
        }        
    } 