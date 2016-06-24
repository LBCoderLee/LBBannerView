//
//  LBBannerView.h
//  BannerView
//
//  Created by li  bo on 16/6/24.
//  Copyright © 2016年 li  bo. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^clickCallBack) (NSInteger index);
@interface LBBannerView : UIView


/** 点击图片回调的block */
@property (nonatomic, copy) clickCallBack clickBlcok;


/**
 *  @author li bo, 16/06/24
 *
 *  创建轮播器的构造方法
 *
 *  @param frame         轮播器的frame
 *  @param playTime      轮播器图片的切换时间
 *  @param imagesArray   轮播器图片的数据源
 *  @param clickCallBack 点击轮播器imageview回调的block
 *
 *  @return 返回一个轮播器组件
 */
- (instancetype)initViewWithFrame:(CGRect)frame
                autoPlayTime:(NSTimeInterval)playTime
                imagesArray:(NSArray *)imagesArray
                clickCallBack:(clickCallBack)clickCallBack;

@end
