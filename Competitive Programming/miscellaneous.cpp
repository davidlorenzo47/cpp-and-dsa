/*    for (int i: nums)
        Cout<<i;

    aur 

    for (int i=0; i < nums.size(); i++)
         Cout<<nums[i] ;

     both the above for loops are same
*/

//123 % 10 = 3; 1230 % 10 = 0
//123 / 10 = 12

/*  Converting int n to vector res:
    int n;
    cout<<"Enter the number:";
    cin>>n;

    vector<int> res;
    while (n != 0) {
        res.push_back(n%10);
        n /= 10;
    }
    reverse(res.begin(), res.end());
*/

/*
    int sum = 0, product = 1;
    for (; n > 0; n /= 10) {
        sum += n % 10;
        product *= n % 10;
        cout<<"Sum is: "<<sum<<" Product is: "<<product<<endl;
    }
    cout<<(product - sum);
*/

/*  creating string of same length
    string command;

    cout<<"Enter the string: ";
    cin>>command;

    string res;
    res.resize(command.size());
*/