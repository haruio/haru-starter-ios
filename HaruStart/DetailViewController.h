//
//  DetailViewController.h
//  HaruStart
//
//  Created by Vista on 2015. 7. 23..
//  Copyright (c) 2015년 haru. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

