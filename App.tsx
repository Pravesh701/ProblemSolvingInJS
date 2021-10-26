import React, { useState } from 'react';
import {
  SafeAreaView,
  StyleSheet,
  Text,
  View,
  TextInput,
  TouchableOpacity,
  FlatList
} from 'react-native';

const App = () => {
  const [inputValue, setInputValue] = useState<string>('')
  const [data, setData] = useState<Array<string>>([])

  const onChangeText = (value: string) => {
    setInputValue(value)
  }

  const onPressClick = () => {
    setData([...data, inputValue])
  }

  const renderClickedData = ({ item, index }: any) => {
    return (
      <View>
        <Text>{item}</Text>
      </View>
    )
  }

  return (
    <SafeAreaView style={styles.mainContainer}>
      <TextInput
        value={inputValue}
        onChangeText={onChangeText}
        style={styles.inputStyle}
      />
      <TouchableOpacity onPress={onPressClick} style={styles.clickButton}>
        <Text style={styles.buttonText}>Click Me</Text>
      </TouchableOpacity>
      <FlatList
        data={data}
        keyExtractor={(item: any, index: number) => index.toString()}
        renderItem={renderClickedData}
      />
    </SafeAreaView>
  );
};

const styles = StyleSheet.create({
  sectionContainer: {
    marginTop: 32,
    paddingHorizontal: 24,
  },
  mainContainer: {
    flex: 1,
    paddingHorizontal: 16
  },
  backgroundStyle: {
    backgroundColor: 'white',
    flex: 1,
    paddingHorizontal: 16
  },
  sectionTitle: {
    fontSize: 24,
    fontWeight: '600',
  },
  sectionDescription: {
    marginTop: 8,
    fontSize: 18,
    fontWeight: '400',
  },
  highlight: {
    fontWeight: '700',
  },
  inputStyle: {
    height: 50,
    backgroundColor: 'white',
    borderRadius: 5,
    fontSize: 16,
    color: 'black',
    fontWeight: '400',
    paddingHorizontal: 16,
    marginTop: 100,
    borderColor: 'gray',
    borderWidth: 2
  },
  clickButton: {
    height: 50,
    backgroundColor: 'blue',
    justifyContent: 'center',
    alignItems: 'center',
    marginTop: 20,
    borderRadius: 5
  },
  buttonText: {
    fontSize: 16,
    color: 'white',
    fontWeight: '400',
  }
});

export default App;
