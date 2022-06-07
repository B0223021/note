int main()
{
    int i = 0;
    vector<Event>eventlist;
    readFlie(eventlist);
    printDate(eventlist);
    cout << "enter the control number if you dont know Enter 8" << endl<<endl;
    while (i != -1) {
        cin >> i;
        cout << endl;
        if ( 0 < i && i < 9) {
            switch (i) {
            case 1:
                printDate(eventlist);
                break;
            case 2:
                printVector(eventlist);
                break;
            case 3:
                addEvent(eventlist);
                break;
            case 4:
                deleteEvent(eventlist);
                break;
            case 5:
                clearVector(eventlist);
                break;
            case 6:
                writeFlie(eventlist);
                break;
            case 7:
                readFlie(eventlist);
                break;
            case 8:
                cout << "enter 1 to check the Date" << endl;
                cout << "enter 2 to check the Events of now " << endl;
                cout << "enter 3 to addEvent" << endl;
                cout << "enter 4 to deleteEvent" << endl;
                cout << "enter 5 to clear Events" << endl;
                cout << "enter 6 to store" << endl;
                cout << "enter 7 to cancel the current action" << endl;
                cout << endl;
                break;
            default:
                cout << "pleace Enter the right control number" << endl;
                break;
            }
        }
        if (i < -1||i>8) { cout << " =.= "<<endl<<endl; }
    };
    writeFlie(eventlist);
    return 0;
}
