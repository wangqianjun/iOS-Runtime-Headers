/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class <FBSceneHost>, FBSDisplay, FBSSceneClientSettings, FBSSceneSettings, FBWorkspace, NSObject<OS_dispatch_queue>, NSString;

@interface FBWorkspaceScene : NSObject <FBWorkspaceServerSceneEventHandler, FBSceneClient> {
    FBSSceneClientSettings *_clientSettings;
    FBSDisplay *_display;
    <FBSceneHost> *_host;
    NSString *_identifier;
    BOOL _invalidated;
    BOOL _sentCreationEvent;
    FBSSceneSettings *_settings;
    FBWorkspace *_workspace;
    NSObject<OS_dispatch_queue> *_workspaceQueue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) <FBSceneHost> * host;
@property(copy,readonly) NSString * identifier;
@property(readonly) FBWorkspace * parentWorkspace;
@property(getter=_workspaceQueue_sceneSettings,setter=_workspaceQueue_setSceneSettings:,copy) FBSSceneSettings * sceneSettings;
@property(getter=_workspaceQueue_hasSentCreationEvent,setter=_workspaceQueue_setSentCreationEvent:) BOOL sentCreationEvent;
@property(copy,readonly) FBSSceneSettings * settings;
@property(readonly) Class superclass;

- (id)_descriptionWithMultilinePrefix:(id)arg1;
- (id)_workspaceQueue;
- (void)_workspaceQueue_dispatchClientBlockIfNecessary:(id)arg1;
- (BOOL)_workspaceQueue_hasSentCreationEvent;
- (void)_workspaceQueue_invalidate;
- (id)_workspaceQueue_process;
- (id)_workspaceQueue_sceneSettings;
- (void)_workspaceQueue_sendDestroyWithTransitionContext:(id)arg1 responseEventHandler:(id)arg2;
- (void)_workspaceQueue_sendSettingsDiff:(id)arg1 transitionContext:(id)arg2 responseEventHandler:(id)arg3;
- (void)_workspaceQueue_setSceneSettings:(id)arg1;
- (void)_workspaceQueue_setSentCreationEvent:(BOOL)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(id)arg3;
- (void)host:(id)arg1 didReceiveActions:(id)arg2;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id)arg5;
- (id)host;
- (id)identifier;
- (id)initWithParentWorkspace:(id)arg1 host:(id)arg2 initialClientSettings:(id)arg3;
- (void)invalidate;
- (id)parentWorkspace;
- (void)sceneAttachContext:(id)arg1;
- (void)sceneDetachContext:(id)arg1;
- (void)sceneDidReceiveActions:(id)arg1;
- (void)sceneDidUpdateClientSettings:(id)arg1;
- (void)sceneUpdateContext:(id)arg1;
- (id)settings;

@end
