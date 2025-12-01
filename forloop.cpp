#include <iostream>
using namespace std;

int main() {}

/*{for(int i=10;i>=0;i--){
    cout<<i<<endl;
    
    }
    cout<<"Happy new year.";
}
| Part               | Meaning                                                                                          | Example      |
| ------------------ | ------------------------------------------------------------------------------------------------ | ------------ |
| **Initialization** | Runs only once at the beginning of the loop. Usually used to declare and set a counter variable. | `int i = 1;` |
| **Condition**      | Checked **before each iteration**. If `true`, the loop body runs; if `false`, the loop stops.    | `i <= 5`     |
| **Update**         | Runs **after each iteration**. Usually increases or decreases the counter.                       | `i++`        |*/
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << "Hello! This is line " << i << endl;
    }
    return 0;
}