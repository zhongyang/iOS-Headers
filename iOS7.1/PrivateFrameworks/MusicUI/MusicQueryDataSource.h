//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPUCompletionQueryDataSource.h"

@interface MusicQueryDataSource : MPUCompletionQueryDataSource
{
}

- (id)_queryForNowPlayingComparisonAtIndex:(unsigned int)arg1;
- (void)_defaultsDidChangeNotification;
- (BOOL)_updateQueryPredicatesAndOrdering;
- (BOOL)queryIsNowPlayingAtIndex:(unsigned int)arg1;
- (id)playbackContextForIndex:(unsigned int)arg1;
- (BOOL)entityIsNowPlayingAtIndex:(unsigned int)arg1;
- (id)entityCountFormat;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 entityType:(int)arg2;

@end
