//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CHDMarker, OADColorMap, OADColorScheme, OADGraphicProperties, OADStroke;

@protocol CHAutoStyling <NSObject>
- (OADStroke *)autoAxisStroke;
- (OADStroke *)autoStrokeForSeriesIndex:(unsigned int)arg1;
- (void)resolveMarker:(CHDMarker *)arg1 withSeriesGraphicProperties:(OADGraphicProperties *)arg2 forSeriesIndex:(unsigned int)arg3;
- (void)resolveLegendGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveMinorGridLinesGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveMajorGridLinesGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveAxisGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolvePlotAreaGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveFloorGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveWallGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveChartAreaGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveGraphicPropertiesOfErrorBar:(OADGraphicProperties *)arg1 forSeriesIndex:(unsigned int)arg2 colorMap:(OADColorMap *)arg3 colorScheme:(OADColorScheme *)arg4;
- (void)resolveGraphicPropertiesOfTrendline:(OADGraphicProperties *)arg1 forSeriesIndex:(unsigned int)arg2;
- (void)resolveGraphicPropertiesOfSeries:(OADGraphicProperties *)arg1 forSeriesIndex:(unsigned int)arg2 isLine:(_Bool)arg3 colorMap:(OADColorMap *)arg4 colorScheme:(OADColorScheme *)arg5;
- (void)resolveGraphicPropertiesOfSeries:(OADGraphicProperties *)arg1 forSeriesIndex:(unsigned int)arg2 colorMap:(OADColorMap *)arg3 colorScheme:(OADColorScheme *)arg4;
@end

