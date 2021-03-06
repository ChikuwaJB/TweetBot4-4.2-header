/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PTHTweetbotAccountPickerViewDelegate;
@class NSString, NSMutableArray, PTHShapeView, UILongPressGestureRecognizer, UITapGestureRecognizer, _PTHTweetbotAccountPickerDragView, _PTHTweetbotAccountPickerItemView, UIView;

@interface PTHTweetbotAccountPickerView : UIScrollView <UIGestureRecognizerDelegate> {

	NSString* _colorGroupName;
	double _avatarDiameter;
	double _itemSpacing;
	NSMutableArray* _itemViews;
	PTHShapeView* _addButton;
	UILongPressGestureRecognizer* _longPressRecognizer;
	UITapGestureRecognizer* _tapRecognizer;
	_PTHTweetbotAccountPickerDragView* _dragView;
	_PTHTweetbotAccountPickerItemView* _draggingItemView;
	CGPoint _dragStartPoint;
	id<PTHTweetbotAccountPickerViewDelegate> delegate;
	UIView* _dragParentView;

}

@property (assign,nonatomic,__weak) UIView * dragParentView;                                        //@synthesize dragParentView=_dragParentView - In the implementation block
@property (assign,nonatomic,__weak) id<PTHTweetbotAccountPickerViewDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_tappedBackground;
-(void)_didSelectAccount:(id)arg1 ;
-(void)_didTapAddAccount:(id)arg1 ;
-(void)_accountDidAdd:(id)arg1 ;
-(void)_didDelete;
-(id)initWithColorGroupName:(id)arg1 avatarDiameter:(double)arg2 itemSpacing:(double)arg3 ;
-(id)userImageForAccount:(id)arg1 ;
-(UIView *)dragParentView;
-(void)setDragParentView:(UIView *)arg1 ;
-(void)_longPress:(id)arg1 ;
-(void)hide;
-(void)show;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<PTHTweetbotAccountPickerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<PTHTweetbotAccountPickerViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
@end

