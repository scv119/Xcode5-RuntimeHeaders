/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DVTFoundation/DVTPortalOperation.h>

@class NSString;

@interface DVTTeamOperationBase : DVTPortalOperation
{
    NSString *_platform;
}

+ (id)operationWithSingleTeamToken:(id)arg1 andPlatform:(id)arg2;
+ (id)operationWithToken:(id)arg1;
+ (id)_operationWithSingleTeamToken:(id)arg1 andPlatform:(id)arg2;
+ (id)_operationsWithToken:(id)arg1;
@property(copy) NSString *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
- (id)description;

@end
