/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIPresentationController.h>

@class UIControl, UIViewController;

@interface _PTHTweetbotHomeTimelineListPickerPresentationController : UIPresentationController {

	UIControl* _dismissView;
	UIViewController* _sourceViewController;

}

@property (assign,nonatomic,__weak) UIViewController * sourceViewController;              //@synthesize sourceViewController=_sourceViewController - In the implementation block
-(void)setSourceViewController:(UIViewController *)arg1 ;
-(long long)presentationStyle;
-(CGRect)frameOfPresentedViewInContainerView;
-(BOOL)shouldPresentInFullscreen;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(void)containerViewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIViewController *)sourceViewController;
@end

