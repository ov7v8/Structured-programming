#include <iostream>
using namespace std;

int main() {

    // المتغيرات
    int consumption;      // استهلاك الكهرباء
    float unitPrice;      // سعر الوحدة
    float bill;           // الفاتورة النهائية

    // إدخال الاستهلاك
    cout << "ادخل مقدار استهلاك الكهرباء: ";
    cin >> consumption;

    // تحديد سعر الوحدة حسب الاستهلاك
    if (consumption <= 150) {
        unitPrice = 0.4;          // استهلاك قليل
    }
    else if (consumption <= 400) {
        unitPrice = 0.8;          // استهلاك متوسط
    }
    else {
        unitPrice = 1.2;          // استهلاك عالي
    }

    // حساب الفاتورة
    bill = consumption * unitPrice;

    // طباعة النتائج
    cout << "\n--- معلومات الفاتورة ---\n";
    cout << "الاستهلاك: " << consumption << endl;
    cout << "سعر الوحدة: " << unitPrice << endl;
    cout << "قيمة الفاتورة: " << bill << endl;

    // تقييم الاستهلاك
    if (bill > 250) {
        cout << "التقييم: استهلاك عالي" << endl;
    }
    else {
        cout << "التقييم: استهلاك طبيعي" << endl;
    }

    return 0;
}
