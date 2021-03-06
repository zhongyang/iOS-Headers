//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "IDSBatchIDQueryControllerDelegate.h"
#import "MFContactsSearchConsumer.h"

@class IDSBatchIDQueryController, IMAccount, MFContactsSearchManager, MFContactsSearchResultsModel, NSArray, NSDate, NSMutableDictionary, NSNumber, NSString;

@interface CKRecipientSearchListController : UITableViewController <IDSBatchIDQueryControllerDelegate, MFContactsSearchConsumer>
{
    BOOL _shouldDisplayGroupSuggestionCells;
    id <CKRecipientSearchListControllerDelegate> _delegate;
    NSArray *_enteredRecipients;
    NSString *_searchText;
    NSArray *_searchResults;
    NSMutableDictionary *_searchIDSStatuses;
    int _pendingSearchTypes;
    MFContactsSearchManager *_searchManager;
    MFContactsSearchResultsModel *_searchResultsModel;
    IDSBatchIDQueryController *_statusQueryController;
    NSNumber *_currentSearchTaskID;
    IMAccount *_defaultiMessageAccount;
    NSDate *_idsQueryStartTime;
}

@property(retain, nonatomic) NSDate *idsQueryStartTime; // @synthesize idsQueryStartTime=_idsQueryStartTime;
@property(retain, nonatomic) IMAccount *defaultiMessageAccount; // @synthesize defaultiMessageAccount=_defaultiMessageAccount;
@property(retain, nonatomic) NSNumber *currentSearchTaskID; // @synthesize currentSearchTaskID=_currentSearchTaskID;
@property(retain, nonatomic) IDSBatchIDQueryController *statusQueryController; // @synthesize statusQueryController=_statusQueryController;
@property(retain, nonatomic) MFContactsSearchResultsModel *searchResultsModel; // @synthesize searchResultsModel=_searchResultsModel;
@property(retain, nonatomic) MFContactsSearchManager *searchManager; // @synthesize searchManager=_searchManager;
@property(nonatomic) int pendingSearchTypes; // @synthesize pendingSearchTypes=_pendingSearchTypes;
@property(retain, nonatomic) NSMutableDictionary *searchIDSStatuses; // @synthesize searchIDSStatuses=_searchIDSStatuses;
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) BOOL shouldDisplayGroupSuggestionCells; // @synthesize shouldDisplayGroupSuggestionCells=_shouldDisplayGroupSuggestionCells;
@property(retain, nonatomic) NSArray *enteredRecipients; // @synthesize enteredRecipients=_enteredRecipients;
@property(nonatomic) id <CKRecipientSearchListControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)_serviceColorForRecipients:(id)arg1;
- (id)_statusQueryController;
- (void)_performSearchWithBlock:(CDUnknownBlockType)arg1;
- (void)removeRecipientFromSearchResults:(id)arg1;
- (void)cancelSearch;
- (void)invalidateOutstandingIDStatusRequests;
- (BOOL)isSearchResultsHidden;
- (BOOL)hasSearchResults;
- (void)searchWithText:(id)arg1;
- (void)idStatusUpdatedForDestinations:(id)arg1;
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)finishedTaskWithID:(id)arg1;
- (void)finishedSearchingForType:(int)arg1;
- (void)consumeSearchResults:(id)arg1 type:(int)arg2 taskID:(id)arg3;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)initWithStyle:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;

@end

