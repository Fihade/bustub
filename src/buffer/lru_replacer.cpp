//===----------------------------------------------------------------------===//
//
//                         BusTub
//
// lru_replacer.cpp
//
// Identification: src/buffer/lru_replacer.cpp
//
// Copyright (c) 2015-2019, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//

#include "buffer/lru_replacer.h"



namespace bustub {

struct ListNode {
    frame_id_t frame_id{-1};
    struct ListNode *prev{nullptr};
    struct ListNode *next{nullptr};
    explicit ListNode(frame_id_t frame_id) : frame_id(frame_id){}
};

struct ListNode *headNode;
struct ListNode *tailNode;
int capacity;
int size;

LRUReplacer::LRUReplacer(size_t num_pages) {
    headNode = new ListNode(0);
    tailNode = new ListNode(0);
    headNode->next = tailNode;
    tailNode->prev = headNode;

    capacity = num_pages;
    size = 0;
}

LRUReplacer::~LRUReplacer() {
    ListNode *next;
    ListNode *current = headNode;
    for(int i = 0; i < size + 2; i++) {
        next = current->next;
        delete current;
        current = next;
    }
};

bool LRUReplacer::Victim(frame_id_t *frame_id) {
    lru_latch
}

void LRUReplacer::Pin(frame_id_t frame_id) {}

void LRUReplacer::Unpin(frame_id_t frame_id) {}

size_t LRUReplacer::Size() { return 0; }

}  // namespace bustub
