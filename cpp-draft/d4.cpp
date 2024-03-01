#include <iostream>
using namespace std;

int main()
{
    int total_seconds;
    cin >> total_seconds;
    // Các bạn hãy viết tiếp đoạn mã tại đây
    int hour, min, sec;
    hour = int(total_seconds / 3600.00);
    min = int(((total_seconds / 3600.00) - hour) * 60.00);
    sec = int(((((total_seconds / 3600.00) - hour) * 60.00) - min) * 60.00);
    cout << hour << "\n" << min << "\n" << sec;
}