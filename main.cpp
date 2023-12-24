#include <iostream>
using namespace std;

int main()
{
    char ch, pre = '\0';

    while (cin.get(ch))
    {
        if (pre == '\0' || pre == '\n' || pre == ' ')
        {
            // تبدیل به حرف بزرگ  
            cout.put(char(toupper(ch)));
        }
        else
        {
            // چاپ حرف بدون تغییر
            cout.put(ch);
        }

        // به‌روزرسانی مقدار قبلی
        pre = ch;
    }

    return 0;
}
