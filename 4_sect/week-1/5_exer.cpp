#include <iostream>
using namespace std;

//add class definitions below this line
class CardBinder 
{
    public:
        CardBinder ()
        {
            gold_card = 0;
            silver_card = 0;
        }
        
        void AddGold(int g)
        {
            if ((g < 0))
            {
                cout << "You cannot add a negative or 0 amount of cards." << endl;
            }
            else if (g + gold_card > 20)
            {
                cout << "You do not have enough binder room." << endl;
            }
            else
            {
                gold_card += g;
            }
        }
        
        void AddSilver(int s)
        {
            if ((s < 0))
            {
                cout << "You cannot add a negative or 0 amount of cards." << endl;
            }
            else if (s + silver_card > 20)
            {
                cout << "You do not have enough binder room." << endl;
            }
            else
            {
                silver_card += s;
            }
        }
        
        void RemoveGold(int g)
        {
            if (g < 0)
            {
                cout << "You cannot remove a negative or 0 amount of cards." << endl;
            }
            else if (g > gold_card)
            {
                cout << "You do not have enough gold cards to remove." << endl;
            }
            else
            {
                gold_card -= g;
            }
        }
        
        void RemoveSilver(int s)
        {
            if (s < 0)
            {
                cout << "You cannot remove a negative or 0 amount of cards." << endl;
            }
            else if (s > silver_card)
            {
                cout << "You do not have enough silver cards to remove." << endl;
            }
            else
            {
                silver_card -= s;
            }
        }
        
        int GetGold()
        {
            return gold_card;
        }
        
        int GetSilver()
        {
            return silver_card;
        }
        
        int GetTotal()
        {
            return gold_card + silver_card;
        }
    
    private:
        int gold_card;
        int silver_card;
};


//add class definitions above this line


int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  CardBinder cb;
  cb.AddGold(21);
  cb.AddGold(11);
  cb.AddSilver(-4);
  cb.AddSilver(8);
  cb.RemoveGold(12);
  cb.RemoveGold(4);
  cb.RemoveSilver(-2);
  cb.RemoveSilver(6);
  cout << cb.GetGold() << endl;
  cout << cb.GetSilver() << endl;
  cout << cb.GetTotal() << endl;
  

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}