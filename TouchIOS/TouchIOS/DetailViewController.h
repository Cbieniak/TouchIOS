//
//  DetailViewController.h
//  TouchIOS
//
//  Created by Christian Bieniak on 22/06/2014.
//  Copyright (c) 2014 BienOwen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
