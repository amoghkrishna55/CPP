int a;
    cout << "Enter number of stars: ";
    cin >> a;
    for(int i = a; i>0; i--){
        for(int j =i; j>0; j--){
            cout << "* ";
        }
        cout << endl;
    }