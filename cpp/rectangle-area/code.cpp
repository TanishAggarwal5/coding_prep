
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle
{
    protected:
        int width;
        int height;
    public:
    void display()
    {
        cout << width << ' ' << height << endl;
    }
    
};
class RectangleArea:public Rectangle
    {
    
        public:
            void display(){
            cout<<(width * height)<<endl;
            }
            void read_input()
            {
                cin>>width>>height;
        
            }
         
    };
    


    

