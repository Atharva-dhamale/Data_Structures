
#Done
class Node:

    def __init__(self,value):
        self.data=value
        self.next=None

class SinglyLL:

    #Done
    def __init__(self):
        self.first=None
        self.iCount=0

    #Done
    def InsertFirst(self,no):
        newn=Node(no)

        if(self.first==None):   #LL is empty
            self.first=newn

        else:                   #It contains atleast one node
            newn.next=self.first
            self.first=newn

        self.iCount=self.iCount+1
        
    
    def InsertLast(self,no):
        pass
    
    def InsertAtPos(self,no,pos):
        pass
    
    def DeleteFirst(self):
        pass
    
    def DeleteLast(self):
        pass
    
    def DeleteAtPos(self,pos):
        pass
    
    #Done
    def Count(self):
        return self.iCount
    
    #Done
    def Display(self):
        
        temp=self.first

        while(temp!=None):
            print("| ",temp.data," |->",end=" ")
            temp=temp.next

        print("None")

    
def main():

    sobj=SinglyLL()

    sobj.InsertFirst(101)
    sobj.InsertFirst(51)
    sobj.InsertFirst(21)
    sobj.InsertFirst(11)

    print("Elements of Linked List are : ")
    sobj.Display()
    print("Number of elemnts in Linked List are : ",sobj.Count())


if __name__=="__main__":
    main()