/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol UIViewControllerContextTransitioning;
@class PTHGradientView, UIView, UIViewController, UIPercentDrivenInteractiveTransition, NSString;

@interface _PTHTweetbotSafariViewControllerTransitioningDelegate : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {

	PTHGradientView* _shadowView;
	UIView* _overlayView;
	UIViewController* _toViewController;
	BOOL _interactive;
	id<UIViewControllerContextTransitioning> _completionContext;
	UIPercentDrivenInteractiveTransition* _interactiveTransition;

}

@property (assign,nonatomic) BOOL interactive;                                                               //@synthesize interactive=_interactive - In the implementation block
@property (assign,nonatomic,__weak) id<UIViewControllerContextTransitioning> completionContext;              //@synthesize completionContext=_completionContext - In the implementation block
@property (nonatomic,retain) UIPercentDrivenInteractiveTransition * interactiveTransition;                   //@synthesize interactiveTransition=_interactiveTransition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UIViewControllerContextTransitioning>)completionContext;
-(void)_setupTransitionViews:(id)arg1 presentedView:(id)arg2 ;
-(void)presentWithDuration:(double)arg1 transitionContext:(id)arg2 ;
-(void)dismissWithDuration:(double)arg1 transitionContext:(id)arg2 ;
-(BOOL)interactive;
-(UIPercentDrivenInteractiveTransition *)interactiveTransition;
-(void)completeIfNeeded;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setInteractiveTransition:(UIPercentDrivenInteractiveTransition *)arg1 ;
-(void)setCompletionContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(void)setInteractive:(BOOL)arg1 ;
@end

