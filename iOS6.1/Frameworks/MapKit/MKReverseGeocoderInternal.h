/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GEOGeocodeRequest, MKPlacemark;

@interface MKReverseGeocoderInternal : NSObject
{
    CDStruct_2c43369c coordinate;
    id <MKReverseGeocoderDelegate> delegate;
    MKPlacemark *storedPlacemark;
    GEOGeocodeRequest *request;
    BOOL querying;
}

@end

