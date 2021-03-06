//
//  bytearray.h
//  YouChatMeServer
//
//  Created by Sam on 4/16/12.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#ifndef YouChatMeServer_bytearray_h
#define YouChatMeServer_bytearray_h

#include <inttypes.h>

#if !defined(__cplusplus)
# include <stdbool.h>
#endif

typedef struct BYTEARRAY BYTEARRAY;

struct BYTEARRAY{
    void *empty;
	size_t offset;
	size_t total;
	uint8_t *buffer;
    size_t buflen;
    bool reading;
    bool wrapbuffer;
};

bool bytearray_alloc(BYTEARRAY *ba, uint32_t length);
bool bytearray_dealloc(BYTEARRAY *ba);
bool bytearray_wrap_buffer(BYTEARRAY *ba, uint8_t *buff, uint32_t length);

bool bytearray_read_ready(BYTEARRAY *ba);
bool bytearray_write_ready(BYTEARRAY *ba);
bool bytearray_empty(BYTEARRAY *ba);

bool bytearray_write8(BYTEARRAY *ba, const uint8_t value);
bool bytearray_write16(BYTEARRAY *ba, const uint16_t value);
bool bytearray_write32(BYTEARRAY *ba, const uint32_t value);
bool bytearray_write64(BYTEARRAY *ba, const uint64_t value);
bool bytearray_writebuffer(BYTEARRAY *ba, const void *buff, const size_t length);

bool bytearray_writestring8(BYTEARRAY *ba, const uint8_t *str, const uint8_t length);
bool bytearray_writestring16(BYTEARRAY *ba, const uint8_t *str, const uint16_t length);
bool bytearray_writestring32(BYTEARRAY *ba, const uint8_t *str, const uint32_t length);

bool bytearray_read8(BYTEARRAY *ba, uint8_t *value);
bool bytearray_read16(BYTEARRAY *ba, uint16_t *value);
bool bytearray_read32(BYTEARRAY *ba, uint32_t *value);
bool bytearray_read64(BYTEARRAY *ba, uint64_t *value);
bool bytearray_readbuffer(BYTEARRAY *ba, void *buff, uint32_t length);

bool bytearray_readstring8(BYTEARRAY *ba, uint8_t *str, uint8_t length, uint8_t *count);
bool bytearray_readstring16(BYTEARRAY *ba, uint8_t *str, uint16_t length, uint16_t *count);
bool bytearray_readstring32(BYTEARRAY *ba, uint8_t *str, uint32_t length, uint32_t *count);


#endif
