import React, { Component } from 'react';
import {
    Animated,
    View,
} from 'react-native';
import { bindActionCreators } from 'redux';
import { connect } from 'react-redux';

interface Props {
    style: any;
    key: any;
    source: any;
    thumbnail: any;
}
interface State {
    thumbnailOpacity: any;
}

/**
 * Pregressing Image Using Functional Components
 * @param props 
 */
const ProgressiveImage = (props: Props) => {

    let thumbnailOpacity = new Animated.Value(0);

    function onLoad(event: any) {
        Animated.timing(thumbnailOpacity, {
            toValue: 0,
            duration: 250
        }).start()
    }
    function onThumbnailLoad(event: any) {
        Animated.timing(thumbnailOpacity, {
            toValue: 1,
            duration: 250
        }).start();
    }
    return (
        <View
            style={{ width: props.style.width, height: props.style.height, backgroundColor: '#ffffff' }}
        >
            <Animated.Image
                resizeMode={'contain'}
                key={props.key}
                style={[
                    {
                        position: 'absolute'
                    },
                    props.style
                ]}
                source={props.source}
                onLoad={(event: any) => onLoad(event)}
            />
            <Animated.Image
                resizeMode={'contain'}
                key={props.key}
                style={[
                    {
                        opacity: thumbnailOpacity
                    },
                    props.style
                ]}
                source={props.thumbnail}
                onLoad={(event: any) => onThumbnailLoad(event)}
            />
        </View>
    )
}

export default ProgressiveImage


//Using Class Component with Redux

/*
class ProgressiveImage extends Component<Props, State> {

    constructor(props: Props) {
        super(props);
        this.state = {
            thumbnailOpacity: new Animated.Value(0)
        }
    }
    onLoad(event: any) {
        Animated.timing(this.state.thumbnailOpacity, {
            toValue: 0,
            duration: 250
        }).start()
    }
    onThumbnailLoad(event: any) {
        Animated.timing(this.state.thumbnailOpacity, {
            toValue: 1,
            duration: 250
        }).start();
    }
    render() {
        return (
            <View
                style={{ width: this.props.style.width, height: this.props.style.height, backgroundColor: '#ffffff' }}
            >
                <Animated.Image
                    resizeMode={'contain'}
                    key={this.props.key}
                    style={[
                        {
                            position: 'absolute'
                        },
                        this.props.style
                    ]}
                    source={this.props.source}
                    onLoad={(event: any) => this.onLoad(event)}
                />
                <Animated.Image
                    resizeMode={'contain'}
                    key={this.props.key}
                    style={[
                        {
                            opacity: this.state.thumbnailOpacity
                        },
                        this.props.style
                    ]}
                    source={this.props.thumbnail}
                    onLoad={(event: any) => this.onThumbnailLoad(event)}
                />
            </View>
        )
    }
}

function mapStateToProps(state: any, ownProps: any) {
    return {
    };
}
function mapDispatchToProps(dispatch: any) {
    return {
    };
}
export default connect(mapStateToProps, mapDispatchToProps)(ProgressiveImage);
*/