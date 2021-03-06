//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RTFCPZEntryInputStream.h"

__attribute__((visibility("hidden")))
@interface RTFCPZEntryUncompressedInputStream : NSObject <RTFCPZEntryInputStream>
{
    long long mOffset;
    long long mEnd;
    id <RTFCPZArchiveInputStream> mInput;
}

- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (void)readToOwnBuffer:(const char **)arg1 size:(unsigned int *)arg2;
- (void)dealloc;
- (id)initWithOffset:(long long)arg1 end:(long long)arg2 input:(id)arg3;

@end

