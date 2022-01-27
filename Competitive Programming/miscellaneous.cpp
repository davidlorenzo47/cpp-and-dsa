/*    for (int i: nums)
        Cout<<i;

    aur 

    for (int i=0; i < nums.size(); i++)
         Cout<<nums[i] ;

     both the above for loops are same
*/

/*
123 % 10 = 3; 1230 % 10 = 0
123 / 10 = 12

% gives remainder.
to check if a number is divisible by given number use %.
eg. to check if 15 is divisible by 3.
    15 % 3 = 0
    remainder = 0. Hence, 15 is divisible by 3.
*/

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

/*
map             complexity: log(n)
unordered map   complexity: O(1)
*/

//functions inside class are known as methods 

/*
for (int i:nums)

here if nums.size() = 5, and values 10,20,30,40,50 then at the beginning, i = 10, then 20,30,40,50.
*/

// in class everything by default is private and in structure everything by default is public.