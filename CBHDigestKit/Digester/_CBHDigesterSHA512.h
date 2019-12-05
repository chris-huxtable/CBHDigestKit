//  _CBHDigesterSHA512.h
//  CBHDigestKit
//
//  Created by Christian Huxtable, April 2019.
//  Copyright (c) 2019, Christian Huxtable <chris@huxtable.ca>
//
//  Permission to use, copy, modify, and/or distribute this software for any
//  purpose with or without fee is hereby granted, provided that the above
//  copyright notice and this permission notice appear in all copies.
//
//  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
//  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
//  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
//  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
//  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
//  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
//  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

#import <CBHDigestKit/CBHDigester.h>


NS_ASSUME_NONNULL_BEGIN

@interface _CBHDigesterSHA512 : CBHDigester

#pragma mark - Initializers

- (instancetype)init NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithAlgorithm:(CBHDigestAlgorithm)algorithm NS_UNAVAILABLE;


#pragma mark - Operations

- (void)updateWithBytes:(uint8_t *)bytes ofLength:(NSUInteger)length;
- (NSData *)finish;

@end

NS_ASSUME_NONNULL_END
