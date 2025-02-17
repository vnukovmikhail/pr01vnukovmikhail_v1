#include <iostream>
#include <iomanip>
#define NMAX 10000
#define MINIM(a, b) (a<b)?a:b
#define MAXIM(a, b) (a>b)?a:b


using namespace std;

int main()
{
    int i;
    int n = 10; // количество книг
    int sheets;
    int minim;
    int maxim;
    float average = 0;
    int value = 15, les = 0, equals = 0, more = 0;
    // int rest, mediocri, proeminenti

    system("color F0");
    cout << "Project nr.1, by Vitalie Ticau!" << endl;
    cout << "Theme: Library" << endl;
    cout << "How many books we have: "; cin >> n;
    cout << "What is value: "; cin >> value;

    minim = NMAX; maxim = 0;
    for (i = 1; i <= n; i++) {
        cout << "Define sheets for book nr. " << i << ": ";
        cin >> sheets;

        average += sheets;
        minim = MINIM(minim, sheets);
        maxim = MAXIM(maxim, sheets);

        if (sheets < value) {
            les++;
        }
        else if (sheets > value) {
            more++;
        }
        else {
            equals++;
        }
    }

    cout << "\n1. \tSheet average: " << setprecision(3) << average / n;
    cout << "\n2. \tMinimum: " << minim;
    cout << "\n\tMaximum: " << maxim;
    cout << "\n3.\tThere are " << value << " books there sheets = " << equals;
    cout << "\n\tThere are " << value << " books there sheets > " << more;
    cout << "\n\tThere are " << value << " books there sheets < " << les;

    return 0;
}
