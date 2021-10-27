import React, { useContext, useState } from 'react';
import {
  SafeAreaView,
  StyleSheet,
  Text,
  View,
  TextInput,
  TouchableOpacity,
  FlatList
} from 'react-native';

const themes = {
  light: {
    foreground: "#000000",
    background: "#eeeeee"
  },
  dark: {
    foreground: "#ffffff",
    background: "#222222"
  }
};

const ThemeContext = React.createContext(themes.light);

function App() {
  return (
    <ThemeContext.Provider value={themes.light}>
      <Toolbar />
    </ThemeContext.Provider>
  );
}

function Toolbar(props: any) {
  return (
    <View>
      <ThemedButton />
    </View>
  );
}

function ThemedButton() {
  return (
    <ThemeContext.Consumer>
      {({ background, foreground }: any) => {
        console.log('ThemeContext.Consumer',);
        return (
          <TouchableOpacity style={{ backgroundColor: background }}>
            <Text style={[styles.buttonText, { color: foreground }]}>
              I am styled by theme context!
            </Text>
          </TouchableOpacity>
        )
      }}
    </ThemeContext.Consumer>
  );
}

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
    marginTop: 100,
    marginHorizontal: 16
  }
});

export default App;
