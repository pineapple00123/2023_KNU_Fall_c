#include <stdio.h>
#include <stdlib.h>

struct Item
{
    int id;
    int level;
};

struct Item *makeitem(int id, int level)
{
    struct Item *Item;
    Item = (struct Item *)malloc(1 * sizeof(struct Item));
    Item->id = id;
    Item->level = level;

    return Item; // 주소넘김
}

int main(void)
{
    struct Item *items[4] = {
        makeitem(1, 0),
        makeitem(3, 1),
        makeitem(2, 2),
        makeitem(4, 3)};

    for (int i = 0; i < 4; i++)
    {
       printf("item, id:%d, level:%d\n",items[i]->id,items[i]->level);
    }
    

    for (int i = 0; i < 4; i++)
    {
        free(items[i]);
    }

    return 0;
}
