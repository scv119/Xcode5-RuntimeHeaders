/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class DVTObservingToken, DVTStackBacktrace, IBAbstractDocumentEditor, IBConnectionPanelFrameView, IBConnectionsViewController, IBDocument, NSWindow;

@interface IBConnectionPanelController : NSObject <NSWindowDelegate, DVTInvalidation>
{
    IBConnectionsViewController *connectionsViewController;
    IBAbstractDocumentEditor *documentEditor;
    IBConnectionPanelFrameView *frameView;
    NSWindow *window;
    IBDocument *document;
    id endPoint;
    DVTObservingToken *titleObservingToken;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)windowWillClose:(id)arg1;
- (id)windowWillReturnUndoManager:(id)arg1;
- (id)window;
- (id)frameView;
- (id)contentController;
- (id)initWithDocumentEditor:(id)arg1 andEndPoint:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

