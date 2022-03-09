    string ans = "", temp = "";
    int flag = 0;
    for (int i = 0; flag < k; i++)
    {
        if (s[i] == ' ')
        {
            ans += temp;
            temp = "";
            flag++;
        }
        temp += s[i];
    }
    return ans;