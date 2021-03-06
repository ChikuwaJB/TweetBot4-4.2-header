/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>

@class UIViewController, PTHTweetbotAccountNavigationBarFiller, NSLayoutConstraint, PTHButton, PTHTweetbotAccount;

@interface PTHTweetbotAccountSideController : PTHViewController {

	UIViewController* _childController;
	PTHTweetbotAccountNavigationBarFiller* _navigationbarFiller;
	NSLayoutConstraint* _navigationHeightConstraint;
	PTHButton* _titleButton;
	PTHTweetbotAccount* _account;

}

@property (nonatomic,readonly) UIViewController * selectedRootViewController; 
@property (nonatomic,readonly) PTHTweetbotAccount * account;                               //@synthesize account=_account - In the implementation block
-(void)_showControllerPicker:(id)arg1 ;
-(id)controllerFromItemOrIdentifier:(id)arg1 ;
-(void)setChildController:(id)arg1 ;
-(id)itemForController:(id)arg1 ;
-(id)identifierForItem:(id)arg1 ;
-(UIViewController *)selectedRootViewController;
-(double)childOverrideTopLayoutGuideLength;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(id)initWithAccount:(id)arg1 ;
-(PTHTweetbotAccount *)account;
@end

