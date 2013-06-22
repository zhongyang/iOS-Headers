/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Celestial/AVQueueFeeder.h>

@class NSMutableArray;

@interface AVArrayQueueFeeder : AVQueueFeeder
{
    NSMutableArray *_items;
}

- (id)init;
- (id)initWithArray:(id)arg1;
- (void)dealloc;
- (id)itemForIndex:(unsigned int)arg1;
- (unsigned int)itemCount;
- (unsigned int)numberOfPaths;
- (id)pathAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)shuffleWithCurrentIndex:(unsigned int)arg1;

@end
