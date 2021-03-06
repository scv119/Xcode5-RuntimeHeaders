/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface IDEBuildOperationDescription : NSObject
{
    NSString *_objectToBuildName;
    NSString *_actionName;
    NSString *_actionInProgress;
}

+ (id)buildOperationDescriptionForSchemeCommand:(id)arg1 buildPurpose:(int)arg2 buildCommand:(int)arg3 objectToBuildName:(id)arg4;
+ (id)buildOperationDescriptionForSchemeCommand:(id)arg1 buildPurpose:(int)arg2 buildCommand:(int)arg3 fileName:(id)arg4;
+ (id)buildOperationDescriptionForSchemeCommand:(id)arg1 buildPurpose:(int)arg2 buildCommand:(int)arg3 schemeName:(id)arg4;
@property(readonly) NSString *actionInProgress; // @synthesize actionInProgress=_actionInProgress;
@property(readonly) NSString *actionName; // @synthesize actionName=_actionName;
@property(readonly) NSString *objectToBuildName; // @synthesize objectToBuildName=_objectToBuildName;
- (void).cxx_destruct;
- (id)initWithObjectToBuildName:(id)arg1 actionName:(id)arg2 actionInProgress:(id)arg3;

@end

