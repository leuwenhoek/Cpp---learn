#include <iostream>

using namespace std;

void per(int box, int column_box,int no_coulmn,int extra_boxes){
    double each_box_percent = (1.0/box) * 100;
    double percent_of_each_coulmn = each_box_percent*column_box;

    for(int i = 1; i<=no_coulmn; i++){
        double total = percent_of_each_coulmn*i;
        cout<<"coulmn "<<i<<" = "<<total<<endl;
    }

    double total_ = extra_boxes*each_box_percent;
    cout<<"extra boxes percent = "<< total_<<endl;
}

int main(){

    int box;
    cout<<"enter the total no. of boxes = ";
    cin>>box;

    int column_box;
    cout<<"Boxes in one coulmn = ";
    cin>>column_box;
    
    int no_coulmn;
    cout<<"no of rows = ";
    cin>>no_coulmn;

    int extra_boxes;
    cout<<"enter the total no. of extra boxes = ";
    cin>>extra_boxes;
 
    
   per(box,column_box,no_coulmn,extra_boxes);

}
    