/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "SSXPCCoding-Protocol.h"

@class NSArray, NSData, NSDate, NSDictionary, NSLock, NSMutableDictionary, NSNumber, NSString, NSURL, SSItemImageCollection;

@interface SSDownloadMetadata : NSObject <SSXPCCoding, NSCoding, NSCopying>
{
    NSMutableDictionary *_dictionary;
    long long _keyStyle;
    NSLock *_lock;
}

- (id)_valueForFirstAvailableTopLevelKey:(id)arg1;
- (id)_urlValueForValue:(id)arg1;
- (id)_thumbnailArtworkImage;
- (id)_stringValueForValue:(id)arg1;
- (void)_setValueCopy:(id)arg1 forMetadataKey:(id)arg2;
- (void)_setValue:(id)arg1 forTopLevelKey:(id)arg2;
- (id)_releaseDateValue;
- (id)_newDateFormatter;
- (id)_newImageCollectionWithURLString:(id)arg1;
- (id)_dateValueForValue:(id)arg1;
- (id)_assetDictionary;
- (id)valueForMetadataKey:(id)arg1;
- (id)valueForFirstAvailableKey:(id)arg1;
@property(copy) NSURL *transitMapDataURL;
@property(retain) NSArray *sinfs;
@property _Bool shouldDownloadAutomatically;
- (void)setValuesFromDownload:(id)arg1;
- (void)setValue:(id)arg1 forMetadataKey:(id)arg2;
@property(copy) id requiredDeviceCapabilities;
@property(retain) NSString *releaseDateString;
@property(getter=isRedownloadDownload) _Bool redownloadDownload;
@property(copy) NSString *redownloadActionParameters;
@property(retain) NSURL *primaryAssetURL;
@property unsigned long long preOrderIdentifier;
@property(copy) NSString *preferredAssetFlavor;
@property(copy) NSString *pageProgressionDirection;
- (void)setMD5HashStrings:(id)arg1 numberOfBytesToHash:(id)arg2;
@property long long keyStyle;
@property(retain) NSString *fileExtension;
@property(retain) NSData *epubRightsData;
@property(retain) NSString *downloadKey;
@property(retain) NSDictionary *dictionary;
@property(retain) NSString *copyright;
@property(retain) NSURL *cancelDownloadURL;
@property(getter=isAutomaticDownload) _Bool automaticDownload;
@property(readonly) NSNumber *numberOfBytesToHash;
- (id)newDownloadProperties;
@property(readonly) NSArray *MD5HashStrings;
@property(readonly, getter=isContentRestricted) _Bool contentRestricted;
- (id)copyWritableMetadata;
@property(readonly) NSData *appReceiptData;
- (id)viewStoreItemURL;
- (id)videoDetailsDictionary;
@property(retain) NSString *transactionIdentifier;
@property(retain) NSString *title;
@property(retain) NSURL *thumbnailImageURL;
@property(retain) NSString *thumbnailNewsstandBindingType;
@property(retain) NSString *thumbnailNewsstandBindingEdge;
@property(readonly) SSItemImageCollection *thumbnailImageCollection;
@property(retain) NSString *subtitle;
@property(retain) NSString *sortTitle;
@property(retain) NSString *sortCollectionName;
@property(retain) NSString *sortArtistName;
@property(copy) NSString *shortDescription;
- (void)setViewStoreItemURL:(id)arg1;
- (void)setVideoDetailsDictionary:(id)arg1;
- (void)setLongSeasonDescription:(id)arg1;
- (void)setSeriesName:(id)arg1;
- (void)setSeasonNumber:(id)arg1;
- (void)setSample:(_Bool)arg1;
- (void)setSagaIdentifier:(unsigned long long)arg1;
- (void)setRental:(_Bool)arg1;
@property(retain) NSNumber *releaseYear;
@property(retain) NSDate *releaseDate;
- (void)setPurchaseDate:(id)arg1;
- (void)setPodcastType:(id)arg1;
- (void)setPodcastFeedURL:(id)arg1;
- (void)setPodcastEpisodeGUID:(id)arg1;
- (void)setNumberOfItemsInCollection:(id)arg1;
- (void)setNumberOfCollectionsInCollectionGroup:(id)arg1;
- (void)setNetworkName:(id)arg1;
@property(copy) NSString *longDescription;
@property(retain) NSString *kind;
@property unsigned long long itemIdentifier;
- (void)setIndexInCollection:(id)arg1;
- (void)setHighDefinition:(_Bool)arg1;
@property unsigned long long genreIdentifier;
@property(retain) NSString *genre;
@property(retain) NSURL *fullSizeImageURL;
- (void)setExplicitContent:(_Bool)arg1;
- (void)setEpisodeSortIdentifier:(id)arg1;
- (void)setEpisodeIdentifier:(id)arg1;
- (void)setDurationInMilliseconds:(id)arg1;
- (void)setDocumentTargetIdentifier:(id)arg1;
- (void)setContentRating:(id)arg1;
- (void)setComposerName:(id)arg1;
- (void)setComposerIdentifier:(unsigned long long)arg1;
- (void)setCompilation:(_Bool)arg1;
- (void)setCollectionName:(id)arg1;
- (void)setCollectionIndexInCollectionGroup:(id)arg1;
- (void)setCollectionIdentifier:(unsigned long long)arg1;
- (void)setCollectionArtistName:(id)arg1;
- (void)setCloudIdentifier:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setArtworkIsPrerendered:(_Bool)arg1;
@property(copy) NSString *artistName;
@property unsigned long long artistIdentifier;
- (id)longSeasonDescription;
- (id)seriesName;
- (id)seasonNumber;
- (unsigned long long)sagaIdentifier;
- (id)purchaseDate;
@property(readonly) NSDictionary *primaryAssetDictionary;
- (id)podcastType;
- (id)podcastFeedURL;
- (id)podcastEpisodeGUID;
- (id)numberOfItemsInCollection;
- (id)numberOfCollectionsInCollectionGroup;
- (id)networkName;
- (_Bool)isSample;
- (_Bool)isRental;
- (_Bool)isHighDefinition;
- (_Bool)isExplicitContent;
- (_Bool)isCompilation;
- (id)indexInCollection;
- (id)episodeSortIdentifier;
- (id)episodeIdentifier;
- (id)durationInMilliseconds;
- (id)documentTargetIdentifier;
- (id)contentRating;
- (id)composerName;
- (unsigned long long)composerIdentifier;
- (id)collectionName;
- (id)collectionIndexInCollectionGroup;
- (unsigned long long)collectionIdentifier;
- (id)collectionArtistName;
- (id)cloudIdentifier;
- (id)bundleIdentifier;
- (_Bool)artworkIsPrerendered;
- (id)applicationIdentifier;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithKind:(id)arg1;
- (id)initWithItem:(id)arg1 offer:(id)arg2;
- (id)initWithItem:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

