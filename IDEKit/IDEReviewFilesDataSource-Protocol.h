/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol IDEReviewFilesDataSource <NSObject>
- (id)reviewFilesNavigator:(id)arg1 documentLocationForNavigableItem:(id)arg2;
- (id)reviewFilesNavigator:(id)arg1 outlineView:(id)arg2 dataCellForNavigableItem:(id)arg3;
- (id)issueNavigableItems;
- (id)flatNavigableItems;
- (id)fileSystemNavigableItems;
- (id)workspaceNavigableItems;

@optional
- (double)reviewFilesNavigator:(id)arg1 outlineView:(id)arg2 rowHeightForNavigableItem:(id)arg3;
- (void)reviewFilesNavigator:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forNavigableItem:(id)arg4;
- (id)reviewFilesNavigator:(id)arg1 importantFilePathsForNavigableItem:(id)arg2 excludingDisabledItems:(id)arg3;
@end
