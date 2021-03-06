//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSTWidthHeightCache : NSObject
{
    struct vector<TSTWidthHeightCache_Private::WHCCol, std::__1::allocator<TSTWidthHeightCache_Private::WHCCol>> mFittingColumnWidth;
    struct vector<TSTWidthHeightCache_Private::WHCRow, std::__1::allocator<TSTWidthHeightCache_Private::WHCRow>> mFittingRowHeight;
    vector_ec52ae8c mModelColumnWidth;
    vector_ec52ae8c mModelRowHeight;
    unsigned short mMaxRow;
    unsigned char mMaxCol;
    struct _opaque_pthread_rwlock_t mLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)_increaseRowCapacity:(unsigned int)arg1;
- (void)_increaseColCapacity:(unsigned int)arg1;
- (id)validateChangeDescriptors:(id)arg1 tableModel:(id)arg2;
- (void)logInternalState;
- (BOOL)verifyDims:(struct CGSize)arg1 forCellID:(CDStruct_0441cfb5)arg2;
- (void)setNumsRows:(unsigned short)arg1 andNumCols:(unsigned char)arg2;
- (void)resetFitHeightForCellID:(CDStruct_0441cfb5)arg1;
- (void)resetRowHeightForCell:(CDStruct_0441cfb5)arg1;
- (void)resetWidthsHeightsForRange:(CDStruct_5f1f7aa9)arg1;
- (void)resetAllCol;
- (void)resetAllRow;
- (void)resetColWidthsStartingWith:(unsigned char)arg1 andEndingWith:(unsigned char)arg2;
- (void)resetRowHeightsStartingWith:(unsigned short)arg1 andEndingWith:(unsigned short)arg2;
- (unsigned int)resetAllInvalidColsInRow:(unsigned short)arg1;
- (id)getListOfInvalidColsInRow:(unsigned short)arg1;
- (float)getModelWidthForColumn:(unsigned char)arg1;
- (float)getModelHeightForRow:(unsigned short)arg1;
- (float)getFitWidthForCol:(unsigned char)arg1;
- (float)getFitHeightForRow:(unsigned short)arg1;
- (BOOL)moveColsFrom:(CDStruct_5f1f7aa9)arg1 toCol:(unsigned char)arg2;
- (BOOL)moveRowsFrom:(CDStruct_5f1f7aa9)arg1 toRow:(unsigned short)arg2;
- (BOOL)insertRows:(unsigned short)arg1 atRow:(unsigned short)arg2;
- (BOOL)insertCols:(unsigned short)arg1 atColumn:(unsigned char)arg2;
- (BOOL)deleteRowsStartingWith:(unsigned short)arg1 andEndingWith:(unsigned short)arg2;
- (BOOL)deleteColsStartingWith:(unsigned char)arg1 andEndingWith:(unsigned char)arg2;
- (BOOL)resetModelCacheRange:(CDStruct_5f1f7aa9)arg1;
- (unsigned long)numModelRowHeights;
- (unsigned long)numModelColumnWidths;
- (BOOL)resetModelCache;
- (BOOL)setModelHeight:(float)arg1 forRow:(unsigned short)arg2;
- (BOOL)setModelWidth:(float)arg1 forColumn:(unsigned char)arg2;
- (BOOL)setFitHeight:(float)arg1 forCellID:(CDStruct_0441cfb5)arg2;
- (BOOL)setFitWidth:(float)arg1 forCellID:(CDStruct_0441cfb5)arg2;
- (BOOL)setFitDims:(struct CGSize)arg1 forCellID:(CDStruct_0441cfb5)arg2;
- (void)dealloc;
- (id)initWithNumRows:(unsigned short)arg1 andNumCols:(unsigned short)arg2;
- (id)init;

@end

