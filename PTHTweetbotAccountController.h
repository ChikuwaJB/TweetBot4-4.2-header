/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <PTHCommon/PTHViewController.h>
#import <Tweetbot/PTHTweetbotAccountTabBarDelegate.h>
#import <Tweetbot/PTHTweetbotAccountPickerControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSMutableArray, NSMutableDictionary, UIView, PTHTweetbotNavigationController, PTHTweetbotAccountTabBar, NSLayoutConstraint, PTHTweetbotAccountNavigationBarFiller, PTHTweetbotAvatarView, PTHTweetbotAccountSideController, PTHTweetbotCursorController, PTHTweetbotDirectMessageThreadsController, PTHTweetbotDirectMessagesLoginController, PTHTweetbotAccountNetworkController, PTHTweetbotAccountQuickPickerController, UIScreenEdgePanGestureRecognizer, PTHTweetbotAccount, UIViewController, NSString;

@interface PTHTweetbotAccountController : PTHViewController <PTHTweetbotAccountTabBarDelegate, PTHTweetbotAccountPickerControllerDelegate, UIGestureRecognizerDelegate> {

	BOOL _firstTime;
	NSMutableArray* _controllers;
	NSMutableDictionary* _tabToControllers;
	UIView* _mainContainerView;
	PTHTweetbotNavigationController* _selectedNavigationController;
	PTHTweetbotAccountTabBar* _horizontalTabBar;
	NSLayoutConstraint* _horizontalTabBarConstraint;
	double _horizontalTabBarShowConstant;
	PTHTweetbotAccountTabBar* _verticalTabBar;
	NSLayoutConstraint* _verticalTabBarConstraint;
	double _verticalTabBarShowConstant;
	PTHTweetbotAccountNavigationBarFiller* _verticalTabBarNavigationBarFiller;
	PTHTweetbotAvatarView* _verticalTabBarAvatarView;
	UIView* _sideContainerView;
	PTHTweetbotAccountSideController* _sideController;
	NSLayoutConstraint* _sideContainerConstraint;
	double _sideContainerShowConstant;
	PTHTweetbotCursorController* _hometimelineController;
	PTHTweetbotCursorController* _mentionsController;
	PTHTweetbotDirectMessageThreadsController* _directMessagesController;
	PTHTweetbotDirectMessagesLoginController* _directMessagesLoginController;
	PTHTweetbotAccountNetworkController* _networkController;
	PTHTweetbotAccountQuickPickerController* _accountQuickPickerController;
	UIScreenEdgePanGestureRecognizer* _screenEdgePanGestureRecognizer;
	NSMutableArray* _keyCommands;
	BOOL _accountPickerVisible;
	PTHTweetbotAccount* _account;

}

@property (nonatomic,readonly) PTHTweetbotAccount * account;                                                //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) long long selectedTab; 
@property (nonatomic,readonly) PTHTweetbotNavigationController * selectedNavigationController;              //@synthesize selectedNavigationController=_selectedNavigationController - In the implementation block
@property (nonatomic,readonly) UIViewController * selectedRootViewController; 
@property (nonatomic,readonly) UIViewController * currentViewController; 
@property (assign,getter=isAccountPickerVisible,nonatomic) BOOL accountPickerVisible;                       //@synthesize accountPickerVisible=_accountPickerVisible - In the implementation block
@property (assign,nonatomic) long long lastSelectedTab; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController *)selectedRootViewController;
-(BOOL)shouldShowPushNotification:(id)arg1 ;
-(void)tabBar:(id)arg1 didSelectTabBarItemView:(id)arg2 ;
-(void)tabBar:(id)arg1 didDoubleTapTabBarItemView:(id)arg2 ;
-(void)nextAccount;
-(void)compose;
-(void)postLastDraft:(id)arg1 ;
-(void)_credentialsUpdated;
-(void)_manualRefresh:(id)arg1 ;
-(void)showAccountPicker:(id)arg1 ;
-(void)_transitionToTraitCollection:(id)arg1 ;
-(void)_didTransitionToTraitCollection:(id)arg1 ;
-(void)_transitionToSize:(CGSize)arg1 ;
-(void)_didTransitionToSize:(CGSize)arg1 ;
-(long long)lastSelectedTab;
-(id)navigationViewControllerForTab:(long long)arg1 ;
-(void)setSelectedNavigationController:(PTHTweetbotNavigationController *)arg1 ;
-(void)_screenEdgePan:(id)arg1 ;
-(void)_changeAccount:(id)arg1 ;
-(long long)tabForController:(id)arg1 ;
-(void)setSelectedTab:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLastSelectedTab:(long long)arg1 ;
-(void)accountPicker:(id)arg1 didSelectAccount:(id)arg2 ;
-(void)_keyboardChangeTab:(id)arg1 ;
-(void)_keyboardShowSettings;
-(void)refreshAllDelayed;
-(void)accountPicker:(id)arg1 didDeleteAccount:(id)arg2 ;
-(double)childOverrideBottomLayoutGuideLength;
-(void)pushRefreshMentions;
-(void)prepareToReset;
-(BOOL)isAccountPickerVisible;
-(void)setAccountPickerVisible:(BOOL)arg1 ;
-(UIViewController *)currentViewController;
-(PTHTweetbotNavigationController *)selectedNavigationController;
-(void)_willTransitionToSize:(CGSize)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)keyCommands;
-(void)loadView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)overrideTraitCollectionForChildViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(void)_willTransitionToTraitCollection:(id)arg1 ;
-(void)refreshAll;
-(id)initWithAccount:(id)arg1 ;
-(PTHTweetbotAccount *)account;
-(long long)selectedTab;
-(void)setSelectedTab:(long long)arg1 ;
@end

