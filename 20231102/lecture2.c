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

int is_good_item(struct Item *Item)
{
    if (Item->level >= 2)
    {
        return 1;
    }
    else
        return 0;
}

int is_low_id_item(struct Item *Item)
{
    if (Item->id <= 2)
    {
        return 1;
    }
    else
        return 0;
}
void fine_item_by_predicate(struct Item **Items, int item_count, int (*predicate)(struct Item *))
{
    for (int i = 0; i < item_count; i++)
    {
        if (predicate(Items[i]))
        {
            printf("find Item! id: %d, level %d\n", Items[i]->id, Items[i]->level);
        }
    }
}
int main(void)
{
    struct Item *items[4] = {
        makeitem(1, 0),
        makeitem(3, 1),
        makeitem(2, 2),
        makeitem(4, 3)};

    fine_item_by_predicate(items, 4, is_good_item);
    fine_item_by_predicate(items, 4, is_low_id_item);

    for (int i = 0; i < 4; i++)
    {
        free(items[i]);
    }

    return 0;
}
