//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

@interface RadioImageCache : NSObject
{
    NSOperationQueue *_imageRequestQueue;
}

+ (struct __CFURLStorageSession *)_newSharedCacheStorageSession;
+ (struct _CFURLCache *)_sharedCFURLCache;
+ (id)sharedCache;
- (void).cxx_destruct;
- (id)_requestForRadioArtwork:(id)arg1;
- (id)_cachedResponseForRequest:(id)arg1;
- (void)_removeAllCachedImages;
- (void)loadImageForStation:(id)arg1 withSize:(struct CGSize)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadImageForRadioArtwork:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)cachedImageDataForStation:(id)arg1 withExactSize:(struct CGSize)arg2;
- (id)cachedImageDataForRadioArtwork:(id)arg1;
- (void)dealloc;
- (id)_init;
- (id)init;

@end
