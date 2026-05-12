/* 
Nama/NIM: Samuel Kristian/13223012
Asisten/NIM: Abraham Pratomo/23225071
Modul: 5 (Foundation of Algorithms)
Hari, tanggal: Selasa, 12 Mei 2026
Soal: 2
*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int nilai;
    struct node* left;
    struct node* right;
} node;
typedef int queue;

void bfs(node* root);
node* newNode(int* nilai);

int main() {
    node x = { 0 };
    int N = 0;  // jumlah node
    int arr[N];
    // terima input lalu masukin inputnya ke node baru
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        newNode(&arr[i]);
    }

    // proses
    int lvl = 0;
    for (int lvl = 0; lvl = true; lvl++) {
        for (int nodeElemen = 0; nodeElemen < ...; nodeElemen++) {
        int nodeMember[50];
        bfs(arr[0]);}
        
    }
    
}

// buat node baru
node* newNode(int* nilai) {
    node* node = malloc(sizeof(node));
    node->nilai = nilai;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// bfs dengan queue
void bfs(node* root) {
    if (root == NULL) return;

    // Inisialisasi Queue (Antrian)
    queue q; init_queue(&q);
    enqueue(&q, root);

    // Iterasi per "level" tree
    for(int curLevel = 0; queue_isEmpty(&q) == false; curLevel++) {
        int len = queueSize(&q); // Banyak antrian saat ini
        
        // Buka dan baca seluruh elemen antrian per level
        for (int i = 0; i < len; i++) {
            node* current = dequeue(&q);
            printf("[level: %d] %d\n", curLevel, current->nilai);

            // masukkan node di level selanjutnya ke dalam antrian
            if (current->left != NULL)  enqueue(&q, current->left);
            if (current->right != NULL) enqueue(&q, current->right);
        }
    }
}

