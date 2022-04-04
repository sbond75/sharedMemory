#pragma once

#include <cstddef>

static int
shm_open_anon_shared(void);

static void *
map_shared_memory_from_fd(int fd, size_t *out_size);

static void* create_shared_memory(size_t size, int* out_fd);
