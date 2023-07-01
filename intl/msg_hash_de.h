#if defined(_MSC_VER) && !defined(_XBOX) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
#if (_MSC_VER >= 1700)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#endif
#pragma warning(disable:4566)
#endif

/* Top-Level Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MAIN_MENU,
   "Hauptmenü"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_TAB,
   "Einstellungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TAB,
   "Spiele importieren"
   )

/* Main Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SETTINGS,
   "Schnellmenü"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SETTINGS,
   "Schnell auf alle relevanten Spieleinstellungen zugreifen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLISTS_TAB,
   "Spieleliste"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLISTS_TAB,
   "Gefundene Spiele werden hier erscheinen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_CONTENT_LIST,
   "Spiele importieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ADD_CONTENT_LIST,
   "Spielelisten erstellen und aktualisieren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONLINE_UPDATER,
   "Online-Updater"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONLINE_UPDATER,
   "Benötigte Komponenten und Vorschaubilder herunterladen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUIT_RETROARCH,
   "Beenden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUIT_RETROARCH,
   "Das Programm schließen."
   )

/* Main Menu > Online Updater */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PL_THUMBNAILS_UPDATER_LIST,
   "Vorschaubilder der Spieleliste herunterladen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PL_THUMBNAILS_UPDATER_LIST,
   "Vorschaubilder für Spiele in der ausgewählten Spieleliste herunterladen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_OVERLAYS,
   "Konfigurationen herunterladen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_UPDATE_OVERLAYS,
   "Spiele-Konfigurationen und Eingabe-Tastenzuordnungsdateien für Nintendo 64-Spiele herunterladen."
   )

/* Settings */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LATENCY_SETTINGS,
   "Latenz"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LATENCY_SETTINGS,
   "Einstellungen für Video-, Audio- und Eingabelatenz ändern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USER_INTERFACE_SETTINGS,
   "Benutzeroberfläche"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_USER_INTERFACE_SETTINGS,
   "Benutzeroberflächen-Einstellungen ändern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RETRO_ACHIEVEMENTS_SETTINGS,
   "Errungenschaften"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RETRO_ACHIEVEMENTS_SETTINGS,
   "Einstellungen für Errungenschaften ändern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SETTINGS,
   "Spielelisten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SETTINGS,
   "Spielelisteneinstellungen ändern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USER_SETTINGS,
   "Benutzer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_USER_SETTINGS,
   "Konten, Benutzername und Sprache ändern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_SETTINGS,
   "Verzeichnisse"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DIRECTORY_SETTINGS,
   "Die Standard-Verzeichnisse für diverse Daten ändern."
   )

/* Settings > Latency */


MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_LATENCY,
   "Audiolatenz (ms)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_LATENCY,
   "Gewünschte Audiolatenz in Millisekunden. Wird ignoriert, wenn der Audiotreiber die angegebene Latenz nicht liefern kann."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_POLL_TYPE_BEHAVIOR,
   "Abfrageverhalten (Neustart erforderlich)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_POLL_TYPE_BEHAVIOR,
   "Beeinflusst, wie die Eingangsabfrage in RetroArch abgearbeitet wird. Wird dieser Wert auf „Früh“ oder „Spät“ gesetzt, kann sich je nach Konfiguration die Latenz verringern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FRAME_DELAY,
   "Bildverzögerung (ms)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FRAME_DELAY,
   "Reduziert die Latenzzeit auf Kosten eines höheren Risikos von Videostottern. Fügt eine Verzögerung in Millisekunden nach der Videopräsentation und vor dem Bild des Cores hinzu."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FRAME_DELAY_AUTO,
   "Automatische Bildverzögerung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FRAME_DELAY_AUTO,
   "Die effektive \"Bildverzögerung\" vorübergehend verringern, um Frame-Drops zu verhindern. Ausgangspunkt ist die halbe Frame-Zeit, wenn \"Bildverzögerung\" 0 ist."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN_AHEAD_ENABLED,
   "Run-Ahead zur Reduzierung der Latenz"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUN_AHEAD_ENABLED,
   "Führt die Core-Logik einen oder mehrere Frames voraus aus und lädt den vorherigen Zustand zurück, um die wahrgenommene Eingangsverzögerung zu verringern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN_AHEAD_FRAMES,
   "Anzahl der Run-Ahead-Frames"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUN_AHEAD_FRAMES,
   "Die Anzahl Frames, die im Voraus ausgeführt werden sollen. Verursacht Gameplay-Probleme wie z. B. Ruckeln, wenn die Anzahl der spielinternen Verzögerungsframes überschritten wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN_AHEAD_SECONDARY_INSTANCE,
   "Zweite Instanz für Run-Ahead verwenden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUN_AHEAD_SECONDARY_INSTANCE,
   "Für das Run-Ahead eine zweite Instanz des RetroArch-Cores verwenden. Vermeidet Audioprobleme."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PREEMPT_ENABLE,
   "Präemptive Frames ausführen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PREEMPT_ENABLE,
   "Führt die Core-Logik mit der letzten Eingabe erneut aus, wenn sich der Status des Controllers ändert. Schneller als Run-Ahead. Es können Audioprobleme beim Laden von Savestates auftreten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PREEMPT_FRAMES,
   "Anzahl präemptiver Frames"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PREEMPT_FRAMES,
   "Die Anzahl Frames, die im Voraus ausgeführt werden sollen. Verursacht Gameplayprobleme wie z. B. Ruckeln, wenn die Anzahl der spielinternen Verzögerungsframes überschritten wird."
   )

/* Settings > User Interface */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SETTINGS,
   "Darstellung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SETTINGS,
   "Einstellungen für das Aussehen des Menüs ändern."
   )

/* Settings > User Interface > Menu Item Visibility */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_VIEWS_SETTINGS,
   "Sichtbarkeit von Menüelementen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_VIEWS_SETTINGS,
   "Die Sichtbarkeit von Menüelementen im Einstellungen-Menü ändern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_ONLINE_UPDATER,
   "\"Online-Updater\" anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_ONLINE_UPDATER,
   "Die Option \"Online-Updater\" im Hauptmenü anzeigen."
   )

/* Settings > User Interface > Views > Settings */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_LATENCY,
   "\"Latenz\" anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_LATENCY,
   "Die \"Latenz\"-Einstellungen anzeigen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_ACHIEVEMENTS,
   "\"Errungenschaften\" anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_ACHIEVEMENTS,
   "Die \"Errungenschaften\"-Einstellungen anzeigen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_PLAYLISTS,
   "\"Spielelisten\" anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_PLAYLISTS,
   "Die \"Spielelisten\"-Einstellungen anzeigen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_USER,
   "\"Benutzer\" anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_USER,
   "Die \"Benutzer\"-Einstellungen anzeigen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_DIRECTORY,
   "\"Verzeichnisse\" anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_DIRECTORY,
   "Die \"Verzeichnisse\"-Einstellungen anzeigen."
   )

/* Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SCALE_FACTOR,
   "Menü-Skalierungsfaktor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SCALE_FACTOR,
   "Größe der Benutzeroberflächen-Elemente im Menü skalieren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WALLPAPER,
   "Hintergrundbild"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WALLPAPER,
   "Lege ein Bild als Menühintergrund fest."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WALLPAPER_OPACITY,
   "Hintergrundbild-Transparenz"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WALLPAPER_OPACITY,
   "Legt die Deckkraft des Hintergrundbilds fest."
   )

/* Settings > Achievements */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_ENABLE,
   "Errungenschaften"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_ENABLE,
   "Verdiene Errungenschaften in klassischen Spielen. Weitere Informationen unter 'https://retroachievements.org'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_HARDCORE_MODE_ENABLE,
   "Hardcore-Modus"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_HARDCORE_MODE_ENABLE,
   "Deaktiviert Cheats und Savestates. Errungenschaften, die im Hardcore-Modus erzielt wurden, sind eindeutig gekennzeichnet, um anderen anzuzeigen, dass diese ohne Hilfsfunktionen erreicht wurden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_LEADERBOARDS_ENABLE,
   "Bestenlisten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_RICHPRESENCE_ENABLE,
   "Sendet regelmäßig im Kontext stehende Spielinformationen an die RetroAchievements-Webseite. Hat keinen Effekt, wenn 'Hardcore Modus' aktiviert ist."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_BADGES_ENABLE,
   "Errungenschaftenabzeichen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_BADGES_ENABLE,
   "Zeigt Abzeichen in der Errungenschaftenliste an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_TEST_UNOFFICIAL,
   "Teste inoffizielle Errungenschaften"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_TEST_UNOFFICIAL,
   "Aktiviere inoffizielle Errungenschaften und/oder Beta-Funktionen zu Testzwecken."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_UNLOCK_SOUND_ENABLE,
   "Freischalt-Ton"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_UNLOCK_SOUND_ENABLE,
   "Einen Ton abspielen, wenn eine Errungenschaft freigeschaltet wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_AUTO_SCREENSHOT,
   "Automatische Bildschirmaufnahme"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_AUTO_SCREENSHOT,
   "Macht automatisch einen Screenshot, wenn eine Errungenschaft erzielt wird."
   )
MSG_HASH( /* suggestion for translators: translate as 'Play Again Mode' */
   MENU_ENUM_LABEL_VALUE_CHEEVOS_START_ACTIVE,
   "Zugabemodus"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_START_ACTIVE,
   "Die Sitzung mit aktivierten Errungenschaften (auch den zuvor freigeschalteten) starten."
   )

/* Settings > Achievements > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_SETTINGS,
   "Darstellung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_APPEARANCE_SETTINGS,
   "Position und Versatz der Benachrichtigungen für Errungenschaften auf dem Bildschirm ändern."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_APPEARANCE_ANCHOR,
   "Legt den Rand/die Ecke des Bildschirms fest, wo die Errungenschaftsbenachrichtigungen angezeigt werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_ANCHOR_TOPLEFT,
   "Oben links"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_ANCHOR_TOPCENTER,
   "Oben mittig"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_ANCHOR_TOPRIGHT,
   "Oben rechts"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_ANCHOR_BOTTOMLEFT,
   "Unten links"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_ANCHOR_BOTTOMCENTER,
   "Unten mittig"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_ANCHOR_BOTTOMRIGHT,
   "Unten rechts"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_PADDING_AUTO,
   "Angepasstes Auffüllen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_APPEARANCE_PADDING_AUTO,
   "Legt fest, ob Errungenschaftsbenachrichtigungen an andere Arten von Bildschirmbenachrichtigungen ausgerichtet werden sollen. Deaktivieren, um manuelle Abstands/Positionswerte festzulegen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_PADDING_H,
   "Manuelles horizontales Auffüllen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_APPEARANCE_PADDING_H,
   "Abstand zum linken/rechten Bildschirmrand, der den Bildschirm-Overscan ausgleichen kann."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_PADDING_V,
   "Manuelles vertikales Auffüllen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_APPEARANCE_PADDING_V,
   "Abstand zum oberen/unteren Bildschirmrand, der den Bildschirm-Overscan ausgleichen kann."
   )

/* Settings > Achievements > Visibility */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_SETTINGS,
   "Sichtbarkeit"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_VISIBILITY_SETTINGS,
   "Ändert, welche Nachrichten und Elemente auf dem Bildschirm angezeigt werden. Deaktiviert nicht die Funktionalität."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_SUMMARY,
   "Zusammenfassung beim Starten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_VISIBILITY_SUMMARY,
   "Zeigt Informationen über das zu ladende Spiel und den aktuellen Fortschritt des Nutzers.\n„Alle identifizierten Spiele“ zeigen eine Zusammenfassung für Spiele ohne veröffentlichte Errungenschaften."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_SUMMARY_ALLGAMES,
   "Alle identifizierten Spiele"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_SUMMARY_HASCHEEVOS,
   "Spiele mit Errungenschaften"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_UNLOCK,
   "Entsperrbenachrichtigungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_VISIBILITY_UNLOCK,
   "Zeigt eine Benachrichtigung, wenn eine Errungenschaft freigeschaltet wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_MASTERY,
   "Meisterschaftsbenachrichtigungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_VISIBILITY_MASTERY,
   "Zeigt eine Benachrichtigung, wenn alle Errungenschaften eines Spiels freigeschaltet sind."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_CHALLENGE_INDICATORS,
   "Aktive Challenge-Indikatoren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_CHALLENGE_INDICATORS,
   "Zeigt Indikatoren auf dem Bildschirm, während bestimmte Errungenschaften erzielt werden können."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_LBOARD_START,
   "Startnachrichten einer Rangliste"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_VISIBILITY_LBOARD_START,
   "Zeigt eine Beschreibung einer Rangliste, wenn sie aktiv wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_LBOARD_SUBMIT,
   "Einreichungsnachrichten einer Rangliste"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_VISIBILITY_LBOARD_SUBMIT,
   "Zeigt eine Nachricht mit dem eingereichten Wert an, wenn der Versuch einer Rangliste abgeschlossen ist."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_LBOARD_CANCEL,
   "Fehlschlagnachrichten einer Rangliste"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_VISIBILITY_LBOARD_CANCEL,
   "Zeigt eine Nachricht an, wenn ein Ranglistenversuch fehlschlägt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_LBOARD_TRACKERS,
   "Ranglisten-Tracker"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_VISIBILITY_LBOARD_TRACKERS,
   "Zeigt Tracker auf dem Bildschirm mit dem aktuellen Wert der aktiven Rangliste."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_ACCOUNT,
   "Login-Meldungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_VISIBILITY_ACCOUNT,
   "Zeigt Nachrichten an, die sich auf die RetroAchievements-Kontoanmeldung beziehen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VERBOSE_ENABLE,
   "Ausführliche Meldungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_VERBOSE_ENABLE,
   "Zeigt zusätzliche Diagnose- und Fehlermeldungen an."
   )

/* Settings > Playlists */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_RENAME,
   "Umbenennen von Spielen erlauben"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_ENTRY_RENAME,
   "Umbenennen von Spieleeinträgen in der Spieleliste erlauben."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_REMOVE,
   "Entfernen von Spielen erlauben"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_ENTRY_REMOVE,
   "Entfernen von Spieleeinträgen in Spieleliste erlauben."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LIST,
   "Spieleliste verwalten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_LIST,
   "Wartungsarbeiten an Spielelisten ausführen."
   )

/* Settings > Playlists > Playlist Management */


MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_DEFAULT_CORE,
   "Emulator-Zuordnung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_DEFAULT_CORE,
   "Wähle den Emulator, der beim Starten von Spielen verwendet werden soll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_RESET_CORES,
   "Emulator-Zuordnung zurücksetzen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_RESET_CORES,
   "Vorhandene Emulator-Zuordnung entfernen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DELETE_PLAYLIST,
   "Spieleliste löschen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DELETE_PLAYLIST,
   "Spieleliste vom Dateisystem entfernen."
   )

/* Settings > User */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_LIST,
   "Benutzerkonten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACCOUNTS_LIST,
   "Aktuell konfigurierte Benutzerkonten verwalten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USER_LANGUAGE,
   "Sprache"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_USER_LANGUAGE,
   "Sprache der Benutzeroberfläche festlegen."
   )

/* Settings > User > Accounts */

MSG_HASH(
   MENU_ENUM_SUBLABEL_ACCOUNTS_RETRO_ACHIEVEMENTS,
   "Verdiene Errungenschaften in klassischen Spielen. Weitere Informationen unter 'https://retroachievements.org'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_ACCOUNTS_RETRO_ACHIEVEMENTS,
   "Anmeldedaten für das RetroAchievements-Konto. Bitte retroachievements.org besuchen und sich für ein kostenloses Konto anmelden.\nNach erfolgter Registrierung muss der Benutzername und das Passwort in RetroArch eingeben werden."
   )

/* Settings > User > Accounts > RetroAchievements */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_CHEEVOS_USERNAME,
   "Benutzername"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_USERNAME,
   "Den Benutzernamen Deines RetroAchievements-Kontos eingeben."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_CHEEVOS_PASSWORD,
   "Passwort"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_PASSWORD,
   "Gib das Passwort Deines RetroAchievements-Kontos ein. Maximale Länge: 255 Zeichen."
   )

/* Settings > Directory */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_DIRECTORY,
   "Texturenpakete"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SYSTEM_DIRECTORY,
   "Texturenpakete werden in diesem Verzeichnis gespeichert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ASSETS_DIRECTORY,
   "Zusätzliche Menü-Daten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ASSETS_DIRECTORY,
   "Zusätzliche Menü-Daten werden in diesem Verzeichnis gespeichert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS_DIRECTORY,
   "Vorschaubilder"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THUMBNAILS_DIRECTORY,
   "Box-Art-, Screenshot- und Titelbild-Vorschaubilder werden in diesem Verzeichnis gespeichert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LIBRETRO_INFO_PATH,
   "Core-Informationen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LIBRETRO_INFO_PATH,
   "Awendungs- und Core-Informationsdateien werden in diesem Verzeichnis gespeichert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_DATABASE_DIRECTORY,
   "Datenbanken"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_DATABASE_DIRECTORY,
   "Datenbanken werden in diesem Verzeichnis gespeichert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DATABASE_PATH,
   "Cheat-Dateien"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_DATABASE_PATH,
   "Cheat-Dateien werden in diesem Verzeichnis gespeichert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_JOYPAD_AUTOCONFIG_DIR,
   "Controller-Profile"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_JOYPAD_AUTOCONFIG_DIR,
   "In diesem Verzeichnis werden Controller-Profile gespeichert, mit denen Controller automatisch konfiguriert werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_REMAPPING_DIRECTORY,
   "Eingabe-Tastenzuordnungsdateien"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_REMAPPING_DIRECTORY,
   "Eingabe-Tastenzuordnungsdateien werden in diesem Verzeichnis gespeichert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_DIRECTORY,
   "Spielelisten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_DIRECTORY,
   "Spielelisten werden in diesem Verzeichnis gespeichert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVEFILE_DIRECTORY,
   "Speicherdaten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVEFILE_DIRECTORY,
   "Alle Speicherdaten werden in diesem Verzeichnis gespeichert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_DIRECTORY,
   "Schnellspeicherungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_DIRECTORY,
   "Schnellspeicherungen werden in diesem Verzeichnis gespeichert."
   )

/* Import Content */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_LIST,
   "Spieleliste für das Nintendo 64 / Nintendo 64DD erstellen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_LIST,
   "Es werden folgende Formate unterstützt:		.n64 .v64 .z64 (Nintendo 64)	und	.ndd (Nintendo 64DD)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCAN_ENTRY,
   "Durchsuchen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCAN_THIS_DIRECTORY,
   "<Dieses Verzeichnis durchsuchen>"
   )

/* Import Content > Manual Scan */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_DIR,
   "Spieleverzeichnis"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_DIR,
   "Ein Verzeichnis auswählen, in dem nach Spielen gesucht werden soll. Die Spieleliste erhält den Namen des Verzeichnisses."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SYSTEM_NAME,
   "Nintendo 64-Datenbank"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_SYSTEM_NAME,
   "Eine Datenbank angeben, um die generierte Spieleliste zu benennen und Vorschaubilder zuordnen zu können."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_CORE_NAME,
   "Emulator"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_CORE_NAME,
   "Einen Emulator für diese Spieleliste auswählen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_OVERWRITE,
   "Vorhandene Spieleliste überschreiben"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_OVERWRITE,
   "Wenn diese Option aktiviert ist, wird die vorhandene Spieleliste überschrieben."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_VALIDATE_ENTRIES,
   "Vorhandene Spieleliste aktualisieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_VALIDATE_ENTRIES,
   "Wenn diese Option aktiviert ist, wird die vorhandene Spieleliste überprüft und ggf. mit fehlenden oder geänderten Spieleeinträgen ergänzt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_START,
   "Spieleliste erstellen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_START,
   "Im angegebenen Verzeichnis nach Nintendo 64 Spielen suchen und Spieleliste erstellen."
   )


/* Playlist > Playlist Item */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN,
   "Spiel starten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUN,
   "Starte das ausgewählte Nintendo 64 Spiel."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RENAME_ENTRY,
   "Umbenennen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RENAME_ENTRY,
   "Titel dieses Spiels umbenennen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DELETE_ENTRY,
   "Von der Spieleliste löschen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DELETE_ENTRY,
   "Entferne diesen Spiel aus der Spielelist."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SET_CORE_ASSOCIATION,
   "Emulator zuordnen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SET_CORE_ASSOCIATION,
   "Legt den Emulator fest, der diesem Spiel zugeordnet ist."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESET_CORE_ASSOCIATION,
   "Emulator-Zuordnung zurücksetzen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESET_CORE_ASSOCIATION,
   "Emulator zurücksetzen, der diesem Spiel zugeordnet ist."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INFORMATION,
   "Informationen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INFORMATION,
   "Informationen über diesen Spieleintrag ansehen."
   )

/* Playlist Item > Set Core Association */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DETECT_CORE_LIST_OK_CURRENT_CORE,
   "Aktueller Emulator"
   )

/* Playlist Item > Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_PATH,
   "Dateipfad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_ENTRY_IDX,
   "Eintrag: %lu/%lu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_DATABASE,
   "Inhaltsdatenbank"
   )

/* Quick Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESUME_CONTENT,
   "Fortsetzen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESUME_CONTENT,
   "Das Schnellmenü verlassen und das aktuelle Spiel fortsetzen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESTART_CONTENT,
   "Neu starten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESTART_CONTENT,
   "Das Spiel vom Anfang neu starten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STATE_SLOT,
   "Schnellspeicherung-Speicherplatz"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_STATE_SLOT,
   "Den aktuell gewählten Speicherplatz ändern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_STATE,
   "Schnellspeicherung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_STATE,
   "Speichere einen Zustand in dem aktuellen Speicherplatz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_STATE,
   "Spielstand laden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOAD_STATE,
   "Lade einen gespeicherten Zustand aus dem aktuellen Speicherplatz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UNDO_LOAD_STATE,
   "Laden der Schnellspeicherung rückgängig machen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_UNDO_LOAD_STATE,
   "Wenn eine Schnellspeicherung geladen wurde, wird es auf den Zustand vor dem Laden zurückgesetzt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UNDO_SAVE_STATE,
   "Speichern der Schnellspeicherung rückgängig machen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_UNDO_SAVE_STATE,
   "Wenn eine Schnellspeicherung überschrieben wurde, wird es auf den vorherigen Zustand zurückgesetzt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_LIST,
   "Schnellspeicherung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_LIST,
   "Zugriff auf die Optionen von Schnellspeicherung."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_OPTIONS,
   "Emulator-Einstellungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_OPTIONS,
   "Die Einstellungen für das aktuell laufende Spiel ändern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INPUT_REMAPPING_OPTIONS,
   "Steuerung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_INPUT_REMAPPING_OPTIONS,
   "Die Steuerung für das aktuell laufende Spiel ändern."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_CHEAT_OPTIONS,
   "Verwende Cheat-Codes."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_OVERRIDE_OPTIONS,
   "Überschreibungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_OVERRIDE_OPTIONS,
   "Einstellungen zum Überschreiben der globalen Konfiguration."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_LIST,
   "Errungenschaften"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACHIEVEMENT_LIST,
   "Errungenschaften und zugehörige Einstellungen anzeigen."
   )

/* Quick Menu > Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_OPTION_OVERRIDE_LIST,
   "Emulator-Optionen verwalten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_OPTION_OVERRIDE_LIST,
   "Überschreibende Einstellungen für das aktuelle Spiel speichern oder löschen."
   )

/* Quick Menu > Options > Manage Core Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAME_SPECIFIC_CORE_OPTIONS_CREATE,
   "Spieleinstellungen speichern"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAME_SPECIFIC_CORE_OPTIONS_REMOVE,
   "Spieleinstellungen löschen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_OPTION_OVERRIDE_INFO,
   "Aktive Einstellungsdatei"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_OPTION_OVERRIDE_INFO,
   "Die aktuell verwendete Einstellungsdatei."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_OPTIONS_RESET,
   "Einstellungen zurücksetzen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_OPTIONS_RESET,
   "Alle Emulator-Einstellungen auf Standardwerte zurücksetzen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_OPTIONS_FLUSH,
   "Optionen auf Datenträger schreiben"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_OPTIONS_FLUSH,
   "Die aktuellen Einstellungen in die aktive Optionsdatei schreiben. Stellt sicher, dass die Optionen erhalten bleiben, falls das Frontend aufgrund eines Fehlers nicht ordnungsgemäß herunterfährt."
   )

/* Quick Menu > Controls */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_MANAGER_LIST,
   "Tastenzuordnungsdateien verwalten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMAP_FILE_MANAGER_LIST,
   "Tastenzuordnungsdateien für das aktuelle Spiel laden, speichern oder löschen."
   )

/* Quick Menu > Controls > Manage Remap Files */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_INFO,
   "Aktive Tastenzuordnungsdatei"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMAP_FILE_INFO,
   "Die aktuell verwendete Tastenzuordnungsdatei."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_LOAD,
   "Tastenzuordnungsdatei laden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_SAVE_CORE,
   "Speichere Emulator-Tastenzuordnungsdatei"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_REMOVE_CORE,
   "Lösche Emulator-Tastenzuordnungsdatei"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_SAVE_GAME,
   "Speichere Spiel-Tastenzuordnungsdatei"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_REMOVE_GAME,
   "Lösche Spiel-Tastenzuordnungsdatei"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_RESET,
   "Tastenzuordnung zurücksetzen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMAP_FILE_RESET,
   "Alle Tastenzuordnungsoptionen auf Standardwerte zurücksetzen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_FLUSH,
   "Eingabe-Tastenzuordnungsdatei aktualisieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMAP_FILE_FLUSH,
   "Aktive Tastenzuordnungsdatei mit den aktuellen Eingabe-Tastenzuordnungsdatei-Optionen überschreiben."
   )

/* Quick Menu > Controls > Manage Remap Files > Load Remap File */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE,
   "Tastenzuordnungsdatei"
   )

/* Quick Menu > Cheats */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_START_OR_CONT,
   "Cheatsuche starten oder fortsetzen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_CHEAT_START_OR_CONT,
   "Speicher durchsuchen, um neue Cheats zu erstellen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE_LOAD,
   "Cheat-Datei laden (ersetzen)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_FILE_LOAD,
   "Eine Cheat-Datei laden und bereits angewandte Cheats überschreiben."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE_LOAD_APPEND,
   "Cheat-Datei laden (Anhängen)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_FILE_LOAD_APPEND,
   "Eine Cheat-Datei laden und an vorhandene Cheats anhängen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RELOAD_CHEATS,
   "Spielspezifische Cheats neu laden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE_SAVE_AS,
   "Speichere Cheat-Datei unter ..."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_FILE_SAVE_AS,
   "Aktuelle Cheats als Cheat-Datei speichern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_NEW_TOP,
   "Neuen Cheat oben hinzufügen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_NEW_BOTTOM,
   "Neuen Cheat unten hinzufügen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DELETE_ALL,
   "Alle Cheats löschen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_APPLY_AFTER_LOAD,
   "Cheats beim Spielstart anwenden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_APPLY_AFTER_LOAD,
   "Cheats beim Laden des Spiels automatisch anwenden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_APPLY_AFTER_TOGGLE,
   "Sofort anwenden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_APPLY_AFTER_TOGGLE,
   "Cheats sofort nach dem Einschalten anwenden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_APPLY_CHANGES,
   "Änderungen übernehmen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_APPLY_CHANGES,
   "Änderungen an den Cheats werden sofort übernommen."
   )

/* Quick Menu > Cheats > Start or Continue Cheat Search */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_START_OR_RESTART,
   "Cheat-Suche starten oder neu starten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_START_OR_RESTART,
   "Links oder Rechts drücken, um die Wortbreite zu ändern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_EXACT,
   "Durchsuche Speicher nach Werten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_SEARCH_EXACT,
   "Links oder Rechts drücken, um den Wert zu ändern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_EXACT_VAL,
   "Gleich zu %u (%X)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_LT,
   "Durchsuche Speicher nach Werten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_LT_VAL,
   "Kleiner als vorher"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_LTE,
   "Durchsuche Speicher nach Werten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_LTE_VAL,
   "Kleiner als oder gleich zu vorher"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_GT,
   "Durchsuche Speicher nach Werten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_GT_VAL,
   "Größer als vorher"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_GTE,
   "Durchsuche Speicher nach Werten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_GTE_VAL,
   "Größer als oder gleich zu vorher"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_EQ,
   "Durchsuche Speicher nach Werten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_EQ_VAL,
   "Gleich zu vorher"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_NEQ,
   "Durchsuche Speicher nach Werten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_NEQ_VAL,
   "Nicht gleich zu vorher"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_EQPLUS,
   "Durchsuche Speicher nach Werten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_SEARCH_EQPLUS,
   "Links oder Rechts drücken, um den Wert zu ändern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_EQPLUS_VAL,
   "Gleich zu vorher +%u (%X)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_EQMINUS,
   "Durchsuche Speicher nach Werten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_SEARCH_EQMINUS,
   "Links oder Rechts drücken, um den Wert zu ändern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_EQMINUS_VAL,
   "Gleich zu vorher +%u (%X)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_MATCHES,
   "Die %u Treffer zu Deiner Liste hinzufügen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DELETE_MATCH,
   "Lösche Treffer #"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_COPY_MATCH,
   "Erstelle Code zu Treffer #"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_MATCH,
   "Speicheradresse des Treffers: %08X Maske: %02X"
   )

/* Quick Menu > Cheats > Load Cheat File (Replace) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE,
   "Cheat-Datei (ersetzen)"
   )

/* Quick Menu > Cheats > Load Cheat File (Append) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE_APPEND,
   "Cheat-Datei (Anhängen)"
   )

/* Quick Menu > Cheats > Cheat Details */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DETAILS_SETTINGS,
   "Cheat-Details"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_IDX,
   "Cheat-Listenposition."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_STATE,
   "Aktiviert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DESC,
   "Beschreibung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_MEMORY_SEARCH_SIZE,
   "Speicher-Suchgröße"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_TYPE,
   "Typ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_VALUE,
   "Wert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADDRESS,
   "Speicheradresse"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_BROWSE_MEMORY,
   "Durchsuche Adresse: %08X"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADDRESS_BIT_POSITION,
   "Speicheradressenmaske"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_ADDRESS_BIT_POSITION,
   "Adressen-Bitmaske bei Speichersuchgröße < 8-bit."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_REPEAT_COUNT,
   "Anzahl Iterationen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_REPEAT_COUNT,
   "Die Häufigkeit, mit der der Cheat angewandt wird. Verwende diese Option mit den beiden anderen Iterationsoptionen, um große Speicherbereiche zu beeinflussen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_REPEAT_ADD_TO_ADDRESS,
   "Adresserhöhung jede Iteration"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_REPEAT_ADD_TO_ADDRESS,
   "Nach jeder Iteration wird die 'Speicheradresse' um diese Zahl mal der 'Speichersuchgröße' erhöht."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_REPEAT_ADD_TO_VALUE,
   "Werterhöhung jede Iteration"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_REPEAT_ADD_TO_VALUE,
   "Nach jeder Iteration wird der 'Wert' um diesen Betrag erhöht."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_TYPE,
   "Vibrieren, wenn der Speicherwert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_VALUE,
   "Vergleichswert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_PORT,
   "Vibrations-Port"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_PRIMARY_STRENGTH,
   "Intensität des primären Vibrators"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_PRIMARY_DURATION,
   "Primäre Vibrationsdauer (ms)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_SECONDARY_STRENGTH,
   "Intensität des sekundären Vibrators"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_SECONDARY_DURATION,
   "Sekundäre Vibrationsdauer (ms)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_NEW_AFTER,
   "Nach diesem einen neuen Cheat hinzufügen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_NEW_BEFORE,
   "Vor diesem einen neuen Cheat hinzufügen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_COPY_AFTER,
   "Diesen Cheat danach kopieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_COPY_BEFORE,
   "Diesen Cheat davor kopieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DELETE,
   "Diesen Cheat entfernen"
   )

/* Quick Menu > Overrides */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERRIDE_FILE_INFO,
   "Aktive Überschreibungsdatei"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERRIDE_FILE_INFO,
   "Die aktuell verwendete Überschreibungsdatei."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERRIDE_FILE_LOAD,
   "Überschreibungsdatei laden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERRIDE_FILE_LOAD,
   "Aktuelle Konfiguration laden und ersetzen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_CURRENT_CONFIG_OVERRIDE_CORE,
   "Emulator-Überschreibungen speichern"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_CURRENT_CONFIG_OVERRIDE_CORE,
   "Eine überschreibende Konfiguration speichern, die für jedes Spiel gilt, der mit diesem Emulator geladen wird. Hat Vorrang vor der Hauptkonfiguration."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMOVE_CURRENT_CONFIG_OVERRIDE_CORE,
   "Emulator-Überschreibungen entfernen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMOVE_CURRENT_CONFIG_OVERRIDE_CORE,
   "Die Überschreibungskonfigurationsdatei für alle Spiele löschen, die mit diesem Emulator geladen werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_CURRENT_CONFIG_OVERRIDE_GAME,
   "Spiel-Überschreibungen speichern"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_CURRENT_CONFIG_OVERRIDE_GAME,
   "Eine überschreibende Konfiguration speichern, die nur für das aktuelle Spiel gilt. Hat Vorrang vor der Hauptkonfiguration."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMOVE_CURRENT_CONFIG_OVERRIDE_GAME,
   "Spielüberschreibungen entfernen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMOVE_CURRENT_CONFIG_OVERRIDE_GAME,
   "Die Überschreibungskonfigurationsdatei löschen, die nur für das aktuelle Spiel gilt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERRIDE_UNLOAD,
   "Überschreibung zurücksetzen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERRIDE_UNLOAD,
   "Alle Einstellungen auf Standardwerte zurücksetzen."
   )

/* Quick Menu > Achievements */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_ACHIEVEMENTS_TO_DISPLAY,
   "Keine Errungenschaften vorhanden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_PAUSE_CANCEL,
   "Errungenschaften-Hardcore-Modus-Pausieren abbrechen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACHIEVEMENT_PAUSE_CANCEL,
   "Den Errungenschaften-Hardcore-Modus für die aktuelle Sitzung aktiviert lassen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_RESUME_CANCEL,
   "Errungenschaften-Hardcore-Modus-Fortsetzen abbrechen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACHIEVEMENT_RESUME_CANCEL,
   "Den Errungenschaften-Hardcore-Modus für die aktuelle Sitzung deaktiviert lassen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_PAUSE,
   "Errungenschaften-Hardcore-Modus pausieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACHIEVEMENT_PAUSE,
   "Pausiert den Hardcore-Modus der Errungenschaften für die aktuelle Sitzung. Diese Aktion aktiviert Cheats, Zurückspulen, Zeitlupe und Laden von Savestates."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_RESUME,
   "Errungenschaften-Hardcore-Modus fortsetzen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACHIEVEMENT_RESUME,
   "Setzt den Hardcore-Modus der Errungenschaften für die aktuelle Sitzung fort. Diese Aktion deaktiviert Cheats, Zurückspulen, Zeitlupe, und Laden von Savestates und setzt das aktuelle Spiel zurück."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOT_LOGGED_IN,
   "Nicht eingeloggt"
)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_ERROR,
   "Netzwerkfehler"
)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UNKNOWN_GAME,
   "Unbekanntes Spiel"
)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CANNOT_ACTIVATE_ACHIEVEMENTS_WITH_THIS_CORE,
   "Errungenschaften lassen sich mit diesem Emulator nicht aktivieren"
)

/* Quick Menu > Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_DETAIL,
   "Datenbankeintrag"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RDB_ENTRY_DETAIL,
   "Datenbankinformationen für das aktuelle Spiel anzeigen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_ENTRIES_TO_DISPLAY,
   "Keine Einträge vorhanden"
   )

/* Miscellaneous UI Items */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_CORES_AVAILABLE,
   "Kein Emulator verfügbar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_CORE_OPTIONS_AVAILABLE,
   "Keine Emulator-Optionen verfügbar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_CORE_INFORMATION_AVAILABLE,
   "Keine Emulator-Informationen verfügbar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_INFORMATION_AVAILABLE,
   "Keine Informationen verfügbar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_PLAYLIST_ENTRIES_AVAILABLE,
   "Keine Spielelisten-Einträge verfügbar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_SETTINGS_FOUND,
   "Keine Einstellungen gefunden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_NETWORKS_FOUND,
   "Kein Netzwerk gefunden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_CORE,
   "Kein Emulator"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SEARCH,
   "Suchen:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CYCLE_THUMBNAILS,
   "Miniaturansichten umlaufend"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_BACK,
   "Zurück"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PARENT_DIRECTORY,
   "Übergeordnetes Verzeichnis"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_PARENT_DIRECTORY,
   "Zurück zum übergeordneten Verzeichnis."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_NOT_FOUND,
   "Verzeichnis nicht gefunden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_ITEMS,
   "Keine Einträge."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SELECT_FILE,
   "Wähle Datei"
   )

/* Settings Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_REMOVE_ENABLE_ALL,
   "Alle Spielelisten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_REMOVE_ENABLE_NONE,
   "AUS"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_INLINE_CORE_DISPLAY_ALWAYS,
   "Immer"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_INLINE_CORE_DISPLAY_NEVER,
   "Nie"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USE_THIS_DIRECTORY,
   "<Dieses Verzeichnis verwenden>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_USE_THIS_DIRECTORY,
   "Dieses als Verzeichnis auswählen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_CONTENT,
   "<Inhaltsverzeichnis>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_DEFAULT,
   "<Standard>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_NONE,
   "<Keins>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NONE,
   "Kein"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UNKNOWN,
   "Unbekannt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWN_Y_L_R,
   "Unten + Y + L1 + R1"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HOLD_START,
   "Start halten (2 Sekunden)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HOLD_SELECT,
   "Select halten (2 Sekunden)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWN_SELECT,
   "Unten + Select"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_DISABLED,
   "<Deaktiviert>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_CHANGES,
   "Sich ändert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_DOES_NOT_CHANGE,
   "Sich nicht ändert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_INCREASE,
   "Sich erhöht"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_DECREASE,
   "Sich verringert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_EQ_VALUE,
   "= Vergleichswert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_NEQ_VALUE,
   "!= Vergleichswert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_LT_VALUE,
   "< Vergleichswert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_GT_VALUE,
   "> Vergleichswert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_INCREASE_BY_VALUE,
   "Sich um Vergleichswert erhöht"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_DECREASE_BY_VALUE,
   "Sich um Vergleichswert verringert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_PORT_16,
   "Alle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_DISABLED,
   "<Deaktiviert>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_SET_TO_VALUE,
   "Fester Wert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_INCREASE_VALUE,
   "Um Wert erhöhen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_DECREASE_VALUE,
   "Um Wert verringern"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_RUN_NEXT_IF_EQ,
   "Nächsten Cheat ausführen wenn Wert = Speicherwert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_RUN_NEXT_IF_NEQ,
   "Nächsten Cheat ausführen wenn Wert != Speicherwert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_RUN_NEXT_IF_LT,
   "Nächsten Cheat ausführen wenn Wert < Speicherwert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_RUN_NEXT_IF_GT,
   "Nächsten Cheat ausführen wenn Wert > Speicherwert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_1,
   "1-Bit, maximaler Wert = 0x01"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_2,
   "2-Bit, maximaler Wert = 0x03"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_4,
   "4-Bit, maximaler Wert = 0x0F"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_8,
   "8-Bit, maximaler Wert = 0xFF"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_16,
   "16-Bit, maximaler Wert = 0xFFFF"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_32,
   "32-Bit, maximaler Wert = 0xFFFFFFFF"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_SORT_MODE_DEFAULT,
   "Systemstandard"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_SORT_MODE_ALPHABETICAL,
   "Alphabetisch"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_SORT_MODE_OFF,
   "Keins"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_DEFAULT,
   "Vollständige Bezeichnungen anzeigen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_REMOVE_PARENS,
   "()-Informationen entfernen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_REMOVE_BRACKETS,
   "[]-Informationen entfernen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_REMOVE_PARENS_AND_BRACKETS,
   "() und [] entfernen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_KEEP_REGION,
   "Region behalten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_KEEP_DISC_INDEX,
   "Disc-Index behalten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_KEEP_REGION_AND_DISC_INDEX,
   "Region und Disc-Index behalten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_THUMBNAIL_MODE_DEFAULT,
   "Systemstandard"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAIL_MODE_TITLE_SCREENS,
   "Titelbildschirm"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCROLL_FAST,
   "Schnell"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ON,
   "EIN"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OFF,
   "AUS"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_YES,
   "Ja"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO,
   "Nein"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TRUE,
   "An"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FALSE,
   "Aus"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ENABLED,
   "Aktiviert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISABLED,
   "Deaktiviert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOT_AVAILABLE,
   "nicht verfügbar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_LOCKED_ENTRY,
   "Gesperrt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_UNLOCKED_ENTRY,
   "Freigeschaltet"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_UNOFFICIAL_ENTRY,
   "Inoffiziell"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_UNSUPPORTED_ENTRY,
   "Nicht unterstützt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_RECENTLY_UNLOCKED_ENTRY,
   "Kürzlich freigeschaltet"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_ALMOST_THERE_ENTRY,
   "Fast fertig"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_ACTIVE_CHALLENGES_ENTRY,
   "Aktive Herausforderungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_TRACKERS_ONLY,
   "Nur Tracker"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_NOTIFICATIONS_ONLY,
   "Nur Benachrichtigungen"
)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DONT_CARE,
   "Standard"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NEAREST,
   "Nächster"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MAIN,
   "Haupt-Icons"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT,
   "Inhalts-Icons"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SYSTEM_NAME_USE_CONTENT_DIR,
   ""
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SYSTEM_NAME_USE_CUSTOM,
   ""
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_CORE_NAME_DETECT,
   "<nichts ausgewählt>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_ANALOG,
   "Linker Analogstick"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RIGHT_ANALOG,
   "Rechter Analogstick"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_ANALOG_FORCED,
   "Analog links (Erzwungen)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RIGHT_ANALOG_FORCED,
   "Analog rechts (Erzwungen)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_KEY,
   "(Taste: %s)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_LEFT,
   "Maus 1"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_RIGHT,
   "Maus 2"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_MIDDLE,
   "Maus 3"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_BUTTON4,
   "Maus 4"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_BUTTON5,
   "Maus 5"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_WHEEL_UP,
   "Mausrad hoch"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_WHEEL_DOWN,
   "Mausrad runter"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_HORIZ_WHEEL_UP,
   "Mausrad links"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_HORIZ_WHEEL_DOWN,
   "Mausrad rechts"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_POLL_TYPE_BEHAVIOR_EARLY,
   "Früh"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_POLL_TYPE_BEHAVIOR_LATE,
   "Spät"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YMD_HMS,
   "JJJJ-MM-TT HH:MM:SS"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YMD_HM,
   "JJJJ-MM-TT HH:MM"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YMD,
   "JJJJ-MM-TT"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YM,
   "JJJJ-MM"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MDYYYY_HMS,
   "MM-TT-JJJJ HH:MM:SS"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MDYYYY_HM,
   "MM-TT-JJJJ HH:MM"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MD_HM,
   "MM-TT HH:MM"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MDYYYY,
   "MM-TT-JJJJ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MD,
   "MM-TT"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMMYYYY_HMS,
   "TT-MM-JJJJ HH:MM:SS"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMMYYYY_HM,
   "TT-MM-JJJJ HH:MM"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMM_HM,
   "TT-MM HH:MM"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMMYYYY,
   "TT-MM-JJJJ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMM,
   "TT-MM"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YMD_HMS_AMPM,
   "JJJJ-MM-TT HH:MM:SS (AM/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YMD_HM_AMPM,
   "JJJJ-MM-TT HH:MM (AM/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MDYYYY_HMS_AMPM,
   "MM-TT-JJJJ HH:MM:SS (AM/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MDYYYY_HM_AMPM,
   "MM-TT-JJJJ HH:MM (AM/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MD_HM_AMPM,
   "MM-TT HH:MM (AM/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMMYYYY_HMS_AMPM,
   "TT-MM-JJJJ HH:MM:SS (AM/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMMYYYY_HM_AMPM,
   "TT-MM-JJJJ HH:MM (AM/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMM_HM_AMPM,
   "TT-MM HH:MM (AP/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_AGO,
   "Vor"
   )

/* RGUI: Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_BACKGROUND_FILLER_THICKNESS_ENABLE,
   "Hintergrundfüllerdicke aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_BACKGROUND_FILLER_THICKNESS_ENABLE,
   "Grobheit des Schachbrettmusters im Menühintergrund erhöhen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_BORDER_FILLER_ENABLE,
   "Rahmenfüller aktivieren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_BORDER_FILLER_THICKNESS_ENABLE,
   "Rahmenfüllerdicke aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_BORDER_FILLER_THICKNESS_ENABLE,
   "Grobheit des Menürahmen-Schachbretts erhöhen."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_BORDER_FILLER_ENABLE,
   "Menürahmen anzeigen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_FULL_WIDTH_LAYOUT,
   "Layout in voller Breite verwenden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_FULL_WIDTH_LAYOUT,
   "Die Größe und Position der Menüeinträge ändern, um den verfügbaren Bildschirmbereich optimal zu nutzen. Deaktiviere diese Option, um das klassische zweispaltige Layout mit fester Breite zu verwenden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_LINEAR_FILTER,
   "Linearer Filter für Menü"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_LINEAR_FILTER,
   "Fügt dem Menü eine leichte Unschärfe hinzu, um harte Pixelkanten zu glätten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_INTERNAL_UPSCALE_LEVEL,
   "Interne Skalierung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_INTERNAL_UPSCALE_LEVEL,
   "Menüoberfläche vor dem Darstellen auf dem Bildschirm hochskalieren. Bei Verwendung mit 'Linearer Filter für Menü' werden Skalierungsartefakte (ungleichmäßige Pixel) entfernt, während ein scharfes Bild erhalten bleibt. Hat einen erheblichen Einfluss auf die Leistung, der mit dem Skalierungslevel zunimmt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_ASPECT_RATIO,
   "Menü-Seitenverhältnis"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_ASPECT_RATIO,
   "Menü-Seitenverhältnis wählen. Breitbildverhältnisse erhöhen die horizontale Auflösung der Menüoberfläche. (Möglicherweise ist ein Neustart erforderlich, wenn 'Menü-Seitenverhältnis sperren' deaktiviert ist.)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_ASPECT_RATIO_LOCK,
   "Menü-Seitenverhältnis sperren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_ASPECT_RATIO_LOCK,
   "Stellt sicher, dass das Menü immer mit dem richtigen Seitenverhältnis angezeigt wird. Wenn deaktiviert, wird das Schnellmenü auf den aktuell geladenen Inhalt gestreckt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME,
   "Menü-Farbschema"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RGUI_MENU_COLOR_THEME,
   "Ein anderes Farbthema wählen. Wenn 'Benutzerdefiniert' ausgewählt wird, können voreingestellte Dateien für Menüthemen verwendet werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_THEME_PRESET,
   "Benutzerdefinierte Menü-Themenvoreinstellung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RGUI_MENU_THEME_PRESET,
   "Im Dateibrowser ein voreingestelltes Menüthema auswählen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_TRANSPARENCY,
   "Menütransparenz"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_TRANSPARENCY,
   "Laufende Inhalte im Hintergrund anzeigen, während das Schnellmenü aktiv ist. Das Deaktivieren der Transparenz kann die Farben des Designs verändern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_SHADOWS,
   "Schatteneffekte"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_SHADOWS,
   "Schlagschatten für Menütext, Rahmen und Vorschaubilder aktivieren. Hat eine mäßige Auswirkung auf die Leistung."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_PARTICLE_EFFECT,
   "Hintergrundanimation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_PARTICLE_EFFECT,
   "Hintergrundpartikelanimation aktivieren. Hat erhebliche Auswirkungen auf die Leistung."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_PARTICLE_EFFECT_SPEED,
   "Hintergrundanimationsgeschwindigkeit"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_PARTICLE_EFFECT_SPEED,
   "Geschwindigkeit der Hintergrundpartikelanimation anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_PARTICLE_EFFECT_SCREENSAVER,
   "Bildschirmschoner-Hintergrund-Animation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_PARTICLE_EFFECT_SCREENSAVER,
   "Einen Hintergrundpartikel-Effekt anzeigen, während der Menü-Bildschirmschoner aktiv ist."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_INLINE_THUMBNAILS,
   "Spielelisten-Vorschaubilder anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_INLINE_THUMBNAILS,
   "Aktiviert die Anzeige von herunterskalierten Vorschaubildern während dem Betrachten von Spielelisten. Umschaltbar mit RetroPad Select. Wenn deaktiviert, können Vorschaubilder immer noch mit RetroPad Start zum Vollbild gewechselt werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS_RGUI,
   "Oberes Vorschaubild"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THUMBNAILS_RGUI,
   "Art der Miniaturansicht, die oben rechts in der Spieleliste angezeigt wird. Dieser Typ von Miniaturansicht kann durch Drücken von RetroPad Y gewechselt werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_THUMBNAILS_RGUI,
   "Unteres Vorschaubild"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LEFT_THUMBNAILS_RGUI,
   "Art des Vorschaubilds, das unten rechts in den Spielelisten angezeigt werden soll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_SWAP_THUMBNAILS,
   "Vorschaubilder tauschen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_SWAP_THUMBNAILS,
   "Vertauscht die Anzeigepositionen von 'Oberes Vorschaubild' und 'Unteres Vorschaubild'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_THUMBNAIL_DOWNSCALER,
   "Vorschaubilder-Downscaling-Methode"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_THUMBNAIL_DOWNSCALER,
   "Resampling-Methode zum Verkleinern großer Vorschaubilder."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_THUMBNAIL_DELAY,
   "Vorschauverzögerung (ms)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_THUMBNAIL_DELAY,
   "Verzögert das Laden der zugehörigen Vorschaubilder bei der Auswahl eines Spielelisteneintrags. Ein Wert von mindestens 256 ms ermöglicht schnelles und verzögerungsfreies Scrollen auch auf den langsamsten Geräten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_EXTENDED_ASCII,
   "Erweiterte ASCII-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_EXTENDED_ASCII,
   "Die Anzeige von nicht standardmäßigen ASCII-Zeichen ermöglichen. Erforderlich für Kompatibilität mit bestimmten nicht englischen westlichen Sprachen. Hat einen moderaten Einfluss auf die Leistung."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_SWITCH_ICONS,
   "Schaltersymbole"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_SWITCH_ICONS,
   "Symbole anstelle von EIN/AUS-Text verwenden, um 'Umschalt'-Menüeinstellungen darzustellen."
   )

/* RGUI: Settings Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_THUMB_SCALE_POINT,
   "Nächste-Nachbarn (schnell)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_THUMB_SCALE_SINC,
   "Sinc/Lanczos3 (langsam)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_UPSCALE_NONE,
   "Kein"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_16_9_CENTRE,
   "16:9 (zentriert)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_16_10_CENTRE,
   "16:10 (zentriert)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_3_2_CENTRE,
   "3:2 (zentriert)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_5_3_CENTRE,
   "5:3 (zentriert)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_LOCK_NONE,
   "AUS"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_LOCK_FIT_SCREEN,
   "An Bildschirmgröße anpassen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_LOCK_INTEGER,
   "Ganzzahlige Skalierung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_LOCK_FILL_SCREEN,
   "An Bildschirmgröße anpassen (gestreckt)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CUSTOM,
   "Benutzerdefiniert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_RED,
   "Klassisch Rot"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_ORANGE,
   "Klassisch Orange"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_YELLOW,
   "Klassisch Gelb"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_GREEN,
   "Klassisch Grün"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_BLUE,
   "Klassisch Blau"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_VIOLET,
   "Klassisches Violett"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_GREY,
   "Klassisch Grau"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_LEGACY_RED,
   "Legacy Rot"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_DARK_PURPLE,
   "Dunkelviolett"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_MIDNIGHT_BLUE,
   "Mitternachtsblau"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_GOLDEN,
   "Gold"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_ELECTRIC_BLUE,
   "Elektrisches Blau"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_APPLE_GREEN,
   "Apfelgrün"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_VOLCANIC_RED,
   "Vulkanrot"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_LAGOON,
   "Lagune"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_FAIRYFLOSS,
   "Zuckerwatte"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_GRUVBOX_DARK,
   "Gruvbox dunkel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_GRUVBOX_LIGHT,
   "Gruvbox hell"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_HACKING_THE_KERNEL,
   "Den Kernel hacken"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_SOLARIZED_DARK,
   "Solarized dunkel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_SOLARIZED_LIGHT,
   "Solarized hell"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_TANGO_DARK,
   "Tango dunkel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_TANGO_LIGHT,
   "Tango hell"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_DYNAMIC,
   "Dynamisch"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_GRAY_DARK,
   "Dunkelgrau"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_GRAY_LIGHT,
   "Hellgrau"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_PARTICLE_EFFECT_NONE,
   "AUS"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_PARTICLE_EFFECT_SNOW,
   "Schnee (leicht)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_PARTICLE_EFFECT_SNOW_ALT,
   "Schnee (schwer)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_PARTICLE_EFFECT_RAIN,
   "Regen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_PARTICLE_EFFECT_STARFIELD,
   "Sternenfeld"
   )

/* XMB: Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_THUMBNAILS,
   "Linkes Vorschaubild"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LEFT_THUMBNAILS,
   "Art des Vorschaubildes, das auf der linken Seite gezeigt werden soll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DYNAMIC_WALLPAPER,
   "Dynamisches Hintergrundbild"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DYNAMIC_WALLPAPER,
   "Lade ein neues Hintergrundbild dynamisch, abhängig vom Inhalt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_HORIZONTAL_ANIMATION,
   "Horizontale Animation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_HORIZONTAL_ANIMATION,
   "Horizontale Animation für das Menü aktivieren. Verursacht Leistungseinbuße."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_ANIMATION_HORIZONTAL_HIGHLIGHT,
   "Animation der horizontalen Icon-Auswahl"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_XMB_ANIMATION_HORIZONTAL_HIGHLIGHT,
   "Die Animation, die beim Scrollen zwischen Tabs ausgelöst wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_ANIMATION_MOVE_UP_DOWN,
   "Animation beim Auf-/Abbewegen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_XMB_ANIMATION_MOVE_UP_DOWN,
   "Die Animation, die beim Auf- oder Abbewegen ausgelöst wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_ANIMATION_OPENING_MAIN_MENU,
   "Animation des Öffnens/Schließens von Menüs"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_XMB_ANIMATION_OPENING_MAIN_MENU,
   "Animation, die beim Öffnen eines Untermenüs verwendet wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ALPHA_FACTOR,
   "Menü-Transparenz"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_FONT,
   "Menü-Schriftart"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_FONT,
   "Eine andere Schriftart wählen, die im Menü verwendet werden soll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_FONT_COLOR_RED,
   "Menü Schriftfarbe (rot)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_FONT_COLOR_GREEN,
   "Menü Schriftfarbe (grün)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_FONT_COLOR_BLUE,
   "Menü Schriftfarbe (blau)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_LAYOUT,
   "Menü-Layout"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_LAYOUT,
   "Ein anderes Layout für die XMB-Schnittstelle wählen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_THEME,
   "Menü-Design"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_THEME,
   "Wähle ein anderes Thema für das Menü aus. Änderungen werden übernommen, nachdem Du das Programm neu gestartet hast."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_SWITCH_ICONS,
   "Schaltersymbole"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_SWITCH_ICONS,
   "Symbole anstelle von EIN/AUS-Text verwenden, um „Umschalt“-Menüeinstellungen darzustellen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_SHADOWS_ENABLE,
   "Schatten zeichnen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_SHADOWS_ENABLE,
   "Schlagschatten für Symbole, Miniaturansichten und Buchstaben zeichnen. Dies führt zu einer geringfügigen Leistungseinbuße."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_RIBBON_ENABLE,
   "Menü-Shader"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_RIBBON_ENABLE,
   "Wähle einen animierten Effekt für das Hintergrundbild. Kann je nach Effekt GPU-lastig sein. Wenn die Leistung nicht ausreicht, wähle einen einfacheren Effekt oder deaktiviere diese Option."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME,
   "Menü-Farbschema"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_MENU_COLOR_THEME,
   "Wähle einen anderen Farbverlauf für das Hintergrundbild."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_VERTICAL_THUMBNAILS,
   "Vertikale Anordnung der Vorschaubilder"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_VERTICAL_THUMBNAILS,
   "Das linke Vorschaubild unter dem rechten auf der rechten Seite des Bildschirms anzeigen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_THUMBNAIL_SCALE_FACTOR,
   "Vorschaubilder-Skalierungsfaktor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_XMB_THUMBNAIL_SCALE_FACTOR,
   "Größe der Vorschaubilder reduzieren, indem die maximal zulässige Breite skaliert wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_VERTICAL_FADE_FACTOR,
   "Vertikaler Verblassungsfaktor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_SHOW_TITLE_HEADER,
   "Kopfzeilentitel anzeigen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_TITLE_MARGIN,
   "Randsaumbreite"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_TITLE_MARGIN_HORIZONTAL_OFFSET,
   "Horizontaler Versatz der Randtitel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MAIN_MENU_ENABLE_SETTINGS,
   "Einstellungen-Tab aktivieren (Neustart erforderlich)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_MAIN_MENU_ENABLE_SETTINGS,
   "Tab mit Programmeinstellungen anzeigen."
   )

/* XMB: Settings Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_RIBBON,
   "Band"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_RIBBON_SIMPLIFIED,
   "Bänder (vereinfacht)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_SIMPLE_SNOW,
   "Schnee (vereinfacht)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_SNOW,
   "Schnee"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_SNOWFLAKE,
   "Schneeflocken"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_CUSTOM,
   "Benutzerdefiniert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_MONOCHROME,
   "Einfarbig"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_MONOCHROME_INVERTED,
   "Einfarbig invertiert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_SYSTEMATIC,
   "Systematisch"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_AUTOMATIC,
   "Automatisch"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_AUTOMATIC_INVERTED,
   "Automatisch invertiert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_APPLE_GREEN,
   "Apfelgrün"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_DARK,
   "Dunkel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_LIGHT,
   "Hell"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_MORNING_BLUE,
   "Morgenblau"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_SUNBEAM,
   "Sonnenstrahl"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_DARK_PURPLE,
   "Dunkelviolett"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_ELECTRIC_BLUE,
   "Elektrisches Blau"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_LEGACY_RED,
   "Legacy Rot"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_MIDNIGHT_BLUE,
   "Mitternachtsblau"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_PLAIN,
   "Einfach"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_VOLCANIC_RED,
   "Vulkanrot"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_LIME,
   "Limettengrün"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_PIKACHU_YELLOW,
   "Pikachu Gelb"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_FAMICOM_RED,
   "Familien-Rot"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_FLAMING_HOT,
   "Flammend heiß"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_ICE_COLD,
   "Eiskalt"
   )

/* Ozone: Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLLAPSE_SIDEBAR,
   "Seitenleiste einklappen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_COLLAPSE_SIDEBAR,
   "Die linke Seitenleiste immer einklappen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_TRUNCATE_PLAYLIST_NAME,
   "Spielelistennamen kürzen (Neustart erforderlich)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_TRUNCATE_PLAYLIST_NAME,
   "Die Anbieternamen aus den Spielelistennamen entfernen. Zum Beispiel wird \"Sony - PlayStation\" zu \"PlayStation\"."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_SORT_AFTER_TRUNCATE_PLAYLIST_NAME,
   "Spielelisten nach Namenskürzung sortieren (Neustart erforderlich)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_SORT_AFTER_TRUNCATE_PLAYLIST_NAME,
   "Spielelisten werden in alphabetischer Reihenfolge neu sortiert, nachdem die Herstellerkomponente ihrer Namen entfernt wurde."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_MENU_COLOR_THEME,
   "Menü-Farbschema"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_MENU_COLOR_THEME,
   "Ein anderes Farbthema wählen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_BASIC_WHITE,
   "Basic Weiß"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_BASIC_BLACK,
   "Basic Schwarz"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_GRUVBOX_DARK,
   "Gruvbox dunkel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_BOYSENBERRY,
   "Boysenbeere"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_HACKING_THE_KERNEL,
   "Den Kernel hacken"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_SOLARIZED_DARK,
   "Solarized dunkel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_SOLARIZED_LIGHT,
   "Solarized hell"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_GRAY_DARK,
   "Dunkelgrau"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_GRAY_LIGHT,
   "Hellgrau"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_PURPLE_RAIN,
   "Violetter Regen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_THUMBNAILS_OZONE,
   "Zweites Vorschaubild"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LEFT_THUMBNAILS_OZONE,
   "Das Inhaltsmetadatenfenster durch ein zusätzliches Vorschaubild ersetzen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_SCROLL_CONTENT_METADATA,
   "Lauftext für Inhaltsmetadaten verwenden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_SCROLL_CONTENT_METADATA,
   "Wenn aktiviert, belegen alle Inhaltsmetadaten in der rechten Seitenleiste der Spielelisten (zugeordneter Core, Spielzeit) eine einzelne Zeile. Text, der die Breite der Seitenleiste überschreitet, wird als Lauftext angezeigt. Wenn deaktiviert, werden alle Inhaltsmetadaten statisch angezeigt und so umbrochen, dass sie so viele Zeilen wie erforderlich belegen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_THUMBNAIL_SCALE_FACTOR,
   "Vorschaubilder-Skalierungsfaktor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_THUMBNAIL_SCALE_FACTOR,
   "Vorschaubilderleiste skalieren."
   )

/* MaterialUI: Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_THUMBNAIL_VIEW_LANDSCAPE,
   "Vorschaubildansicht"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_THUMBNAIL_VIEW_LANDSCAPE,
   "Den Vorschaubildansichtsmodus der Spielelisten angeben."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_DUAL_THUMBNAIL_LIST_VIEW_ENABLE,
   "Sekundäre Vorschaubilder in Listenansicht zeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_DUAL_THUMBNAIL_LIST_VIEW_ENABLE,
   "Zeigt ein sekundäres Vorschaubild an, wenn die Vorschaubildmodi vom Typ \"Liste\" verwendet werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS_MATERIALUI,
   "Primäres Vorschaubild"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THUMBNAILS_MATERIALUI,
   "Haupttyp der Vorschaubilder, die jedem Spielelisteneintrag zugeordnet werden. Dienen normalerweise als Inhaltssymbole."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_THUMBNAILS_MATERIALUI,
   "Sekundäres Vorschaubild"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LEFT_THUMBNAILS_MATERIALUI,
   "Zusätzliche Art der Vorschaubilder, die jedem Spielelisteneintrag zugeordnet werden. Die Verwendung hängt vom aktuellen Vorschaubildansichtsmodus der Spieleliste ab."
   )

/* MaterialUI: Settings Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_LIST_SMALL,
   "Liste (klein)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_LIST_MEDIUM,
   "Liste (mittel)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_LIST_LARGE,
   "Liste (groß)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_DESKTOP,
   "Zweiteilige Ansicht"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_DISABLED,
   "AUS"
   )

/* Unsorted */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_CHEEVOS_SETTINGS,
   "Errungenschaften-Konten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_LIST_END,
   "Endpunkt der Benutzerkonten-Liste"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TURBO_DEADZONE_LIST,
   "Turbo/Totzone"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_SETTINGS,
   "Retro-Errungenschaften"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_COUNTERS,
   "Core-Zähler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRONTEND_COUNTERS,
   "Frontend-Zähler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HORIZONTAL_MENU,
   "Horizontales Menü"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DESCRIPTOR_HIDE_UNBOUND,
   "Verstecke nicht zugewiesene Eingabe-Beschriftungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DESCRIPTOR_LABEL_SHOW,
   "Zeige Eingabe-Bezeichnungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_SETTINGS,
   "Bildschirm-Overlay"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_CONTENT_HISTORY,
   "Verlauf"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOAD_CONTENT_HISTORY,
   "Inhalte aus der Verlaufsliste auswählen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_LOAD_CONTENT_HISTORY,
   "Wenn Inhalte geladen werden, wird die Inhalt-Core-Kombination im Verlauf gespeichert.\nDer Verlauf wird im selben Verzeichnis wie die RetroArch-Konfigurationsdatei gespeichert. Wurde beim Start keine Konfigurationsdatei geladen, wird der Verlauf nicht gespeichert oder geladen und ist auch nicht im Hauptmenü vorhanden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SUBSYSTEM_SETTINGS,
   "Subsysteme"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SUBSYSTEM_SETTINGS,
   "Zugriff auf die Subsystemeinstellungen für aktuelle Inhalte."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SUBSYSTEM_CONTENT_INFO,
   "Aktueller Inhalt: %s"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_PERFORMANCE_COUNTERS,
   "Keine Leistungsindikatoren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_PLAYLISTS,
   "Keine Spielelisten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SETTINGS,
   "Cheat-Einstellungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_SETTINGS,
   "Cheatsuche starten oder fortsetzen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN_MUSIC,
   "Abspielen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SECONDS,
   "Sekunden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SUPPORTED_CORES,
   "Emulatoren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USER,
   "Benutzer"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_KEYBOARD,
   "Tastatur"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USE_BUILTIN_IMAGE_VIEWER,
   "Integrierten Bildbetrachter verwenden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MAX_SWAPCHAIN_IMAGES,
   "Maximale Anzahl von Zwischenbildern"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MAX_SWAPCHAIN_IMAGES,
   "Zwingt den Videotreiber dazu, einen bestimmten Framebuffer zu verwenden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_MAX_SWAPCHAIN_IMAGES,
   "Maximale Zahl von Zwischenbildern. Diese Einstellung kann dem Videotreiber vorschreiben, einen bestimmten Videopuffermodus zu verwenden.\nEinfache Pufferung – 1\nDoppelte Pufferung – 2\nDreifache Pufferung – 3\nDie Auswahl des richtigen Puffermodus kann einen großen Einfluss auf die Leistung haben."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WAITABLE_SWAPCHAINS,
   "CPU und GPU fest synchronisieren. Reduziert Latenz auf Kosten der Leistung."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MAX_FRAME_LATENCY,
   "Maximale Frame-Latenzzeit"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MAX_FRAME_LATENCY,
   "Zwingt den Videotreiber dazu, einen bestimmten Framebuffer zu verwenden."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_PARAMETERS,
   "Modifiziert die Shader-Voreinstellung, die momentan im Menü benutzt wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VIDEO_SHADER_PRESET_TWO,
   "Shader-Voreinstellungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VIDEO_SHADER_PRESET_PREPEND_TWO,
   "Shader-Voreinstellungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VIDEO_SHADER_PRESET_APPEND_TWO,
   "Shader-Voreinstellungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BROWSE_URL_LIST,
   "Besuche URL"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BROWSE_URL,
   "URL-Pfad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ROOM_NICKNAME,
   "Spitzname: %s"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_COMPAT_CONTENT_LOOK,
   "Nach kompatiblen Inhalten wird gesucht …"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_COMPAT_CONTENT_NO_CORE,
   "Kein Core gefunden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_COMPAT_CONTENT_NO_PLAYLISTS,
   "Keine Playlist gefunden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_COMPAT_CONTENT_FOUND,
   "Kompatibler Inhalt gefunden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_COMPAT_CONTENT_NOT_FOUND,
   "Fehler beim Auffinden passender Inhalte mittels CRC oder Dateiname"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_START_GONG,
   "Gong starten"
   )

/* Unused (Only Exist in Translation Files) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ASPECT_RATIO_AUTO,
   "Automatisches Bildseitenverhältnis"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ROOM_NICKNAME_LAN,
   "Spitzname (LAN): %s"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_BGM_ENABLE,
   "Aktiviere System-BGM"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CUSTOM_RATIO,
   "Benutzerdefiniertes Verhältnis"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_ENABLE,
   "Aktiviere Aufnahmefunktion"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_PATH,
   "Speichere Aufnahme als..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_USE_OUTPUT_DIRECTORY,
   "Speichere Aufnahme im Ausgabeverzeichnis"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_MATCH_IDX,
   "Betrachte Treffer #"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_MATCH_IDX,
   "Treffer auswählen, der angezeigt werden soll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FORCE_ASPECT,
   "Seitenverhältnis erzwingen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SELECT_FROM_PLAYLIST,
   "Wähle aus Wiedergabenliste"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESUME,
   "Fortsetzen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESUME,
   "Das Schnellmenü verlassen und das aktuelle Spiel fortsetzen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_VIEW_MATCHES,
   "Liste von %u Treffern ansehen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_CREATE_OPTION,
   "Erstelle Code zu diesem Treffer"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DELETE_OPTION,
   "Diesen Treffer löschen"
   )
MSG_HASH( /* FIXME Still exists in a comment about being removed */
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_FOOTER_OPACITY,
   "Transparenz der Fußzeile"
   )
MSG_HASH( /* FIXME Still exists in a comment about being removed */
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_FOOTER_OPACITY,
   "Ändere die Transparenz der Footer-Grafik."
   )
MSG_HASH( /* FIXME Still exists in a comment about being removed */
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_HEADER_OPACITY,
   "Transparenz der Kopfzeile"
   )
MSG_HASH( /* FIXME Still exists in a comment about being removed */
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_HEADER_OPACITY,
   "Ändere die Transparenz der Header-Grafik."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ENABLE,
   "Netzwerkspiel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_START_CONTENT,
   "Starte Inhalt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_HISTORY_PATH,
   "Pfad zur Verlaufsliste"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_RESOLUTION_OUTPUT_DISPLAY_ID,
   "Ausgabebildschirm-ID"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_RESOLUTION_OUTPUT_DISPLAY_ID,
   "Den Ausgabeport auswählen, welcher mit dem CRT-Bildschirm verbunden ist."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP,
   "Hilfe"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLEAR_SETTING,
   "Leeren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_AUDIO_VIDEO_TROUBLESHOOTING,
   "Audio/Video-Fehlerbehebung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_CHANGE_VIRTUAL_GAMEPAD,
   "Virtuelles Controller-Overlay wird geändert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_LOADING_CONTENT,
   "Inhalt laden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_SCANNING_CONTENT,
   "Nach Inhalten suchen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_WHAT_IS_A_CORE,
   "Was ist ein Core?"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_SEND_DEBUG_INFO,
   "Debugging-Informationen senden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_HELP_SEND_DEBUG_INFO,
   "Sendet Diagnoseinformationen über das Gerät und die RetroArch-Konfiguration zur Analyse an unsere Server."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANAGEMENT,
   "Datenbanken"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_DELAY_FRAMES,
   "Netzwerkspiel-Verzögerung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_LAN_SCAN_SETTINGS,
   "Lokales Netzwerk durchsuchen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_LAN_SCAN_SETTINGS,
   "Netzwerkspiele im lokalen Netzwerk suchen und zu ihnen verbinden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MODE,
   "Netzwerkspiel-Client"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SPECTATOR_MODE_ENABLE,
   "Netzwerkspiel-Zuschauer"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_DESCRIPTION,
   "Beschreibung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_THROTTLE_ENABLE,
   "Begrenze maximale Ausführgeschwindigkeit"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_START_SEARCH,
   "Suche nach neuem Cheat-Code starten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_START_SEARCH,
   "Nach einem neuen Cheat suchen. Die Anzahl der Bits kann geändert werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_CONTINUE_SEARCH,
   "Suche fortsetzen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_CONTINUE_SEARCH,
   "Suche weiter nach einem neuen Cheat."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_LIST_HARDCORE,
   "Errungenschaften (Hardcore)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_DETAILS,
   "Cheat-Details"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_CHEAT_DETAILS,
   "Verwaltet die Einstellungen für Cheat-Details."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_SEARCH,
   "Cheatsuche starten oder fortsetzen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_CHEAT_SEARCH,
   "Starte oder setze eine Cheat-Code-Suche fort."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_NUM_PASSES,
   "Cheat-Durchläufe"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_NUM_PASSES,
   "Erhöhe oder verringere die Anzahl der Cheats."
   )

/* Unused (Needs Confirmation) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_X,
   "Linker Analogstick X"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_Y,
   "Linker Analogstick Y"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_X,
   "Rechter Analogstick X"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_Y,
   "Rechter Analogstick Y"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_SETTINGS,
   "Cheatsuche starten oder fortsetzen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST,
   "Datenbank-Suchanfragen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_DEVELOPER,
   "Datenbank - Filter: Entwickler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_PUBLISHER,
   "Datenbank - Filter: Publisher"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_ORIGIN,
   "Datenbank - Filter: Herkunft"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_FRANCHISE,
   "Datenbank - Filter: Franchise"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_ESRB_RATING,
   "Datenbank - Filter: ESRB-Bewertung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_ELSPA_RATING,
   "Datenbank - Filter: ELSPA-Bewertung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_PEGI_RATING,
   "Datenbank - Filter: PEGI-Bewertung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_CERO_RATING,
   "Datenbank - Filter: CERO-Bewertung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_BBFC_RATING,
   "Datenbank - Filter: BBFC-Bewertung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_MAX_USERS,
   "Datenbank - Filter: Max. Spieler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_RELEASEDATE_BY_MONTH,
   "Datenbank - Filter: Veröffentlichungsdatum nach Monat"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_RELEASEDATE_BY_YEAR,
   "Datenbank - Filter: Veröffentlichungsdatum nach Jahr"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_EDGE_MAGAZINE_ISSUE,
   "Datenbank - Filter: Edge-Zeitschriftenausgabe"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_EDGE_MAGAZINE_RATING,
   "Datenbank - Filter: Edge-Bewertung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_DATABASE_INFO,
   "Datenbank-Informationen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIG,
   "Konfiguration"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SETTINGS,
   "Netzwerkspiel-Einstellungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_SLANG_SUPPORT,
   "Slang-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FBO_SUPPORT,
   "Unterstützung für OpenGL/Direct3D Render-to-Texture (Multi-Pass Shader)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_DIR,
   "Inhalt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_DIR,
   "Wird normalerweise von Entwickler verwendet, die libretro/RetroArch-Apps paketieren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ASK_ARCHIVE,
   "Nachfragen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS,
   "Grundlegende Menüsteuerung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_CONFIRM,
   "Bestätigen/OK"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_QUIT,
   "Beenden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_SCROLL_UP,
   "Nach oben scrollen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_START,
   "Standardwerte"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_TOGGLE_KEYBOARD,
   "Tastatur ein-/ausschalten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_TOGGLE_MENU,
   "Menü ein-/ausschalten"
   )

/* Discord Status */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_IN_MENU,
   "Im Menu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_IN_GAME,
   "Im Spiel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_IN_GAME_PAUSED,
   "Im Spiel (Pausiert)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_STATUS_PLAYING,
   "Im Spiel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_STATUS_PAUSED,
   "Pausiert"
   )

/* Notifications */

MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_NETPLAY_START_WHEN_LOADED,
   "Netzwerkspiel wird gestartet, sobald der Inhalt geladen ist."
   )
MSG_HASH(
   MSG_NETPLAY_NEED_CONTENT_LOADED,
   "Der Inhalt muss geladen werden, bevor das Netzwerkspiel gestartet wird."
   )
MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_NETPLAY_LOAD_CONTENT_MANUALLY,
   "Konnte keinen geeigneten Core oder Inhalt finden, lade manuell."
   )
MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_VIDEO_DRIVER_FALLBACK,
   "Der System-Grafiktreiber ist nicht mit dem aktuellen Grafiktreiber in RetroArch kompatibel. Greife auf den %s Treiber zurück. Bitte RetroArch neu starten, damit die Änderungen wirksam werden."
   )
MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_SIDELOAD_CORE_SUCCESS,
   "Core Installation erfolgreich"
   )
MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_SIDELOAD_CORE_ERROR,
   "Core Installation fehlgeschlagen"
   )
MSG_HASH(
   MSG_CHEAT_DELETE_ALL_INSTRUCTIONS,
   "Drücke fünf Mal rechts, um alle Cheats zu löschen."
   )
MSG_HASH(
   MSG_FAILED_TO_SAVE_DEBUG_INFO,
   "Speichern der Debugging-Informationen fehlgeschlagen."
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_DEBUG_INFO,
   "Senden der Debugging-Informationen an den Server fehlgeschlagen."
   )
MSG_HASH(
   MSG_SENDING_DEBUG_INFO,
   "Debugging-Informationen werden gesendet..."
   )
MSG_HASH(
   MSG_SENT_DEBUG_INFO,
   "Debugging-Informationen erfolgreich an den Server gesendet. Deine ID-Nummer ist %u."
   )
MSG_HASH(
   MSG_PRESS_TWO_MORE_TIMES_TO_SEND_DEBUG_INFO,
   "Drücke noch zweimal, um Diagnoseinformationen an das RetroArch-Team zu senden."
   )
MSG_HASH(
   MSG_PRESS_ONE_MORE_TIME_TO_SEND_DEBUG_INFO,
   "Drücke noch einmal, um Diagnoseinformationen an das RetroArch-Team zu senden."
   )
MSG_HASH(
   MSG_AUDIO_MIXER_VOLUME,
   "Globale Lautstärke des Audio-Mixers"
   )
MSG_HASH(
   MSG_NETPLAY_LAN_SCAN_COMPLETE,
   "Netzwerkspiel-Suche abgeschlossen."
   )
MSG_HASH(
   MSG_SORRY_UNIMPLEMENTED_CORES_DONT_DEMAND_CONTENT_NETPLAY,
   "Entschuldigung, nicht implementiert: Cores, die keinen Inhalt verlangen, können nicht an Netzwerkspielen teilnehmen."
   )
MSG_HASH(
   MSG_NATIVE,
   "Nativ"
   )
MSG_HASH(
   MSG_UNKNOWN_NETPLAY_COMMAND_RECEIVED,
   "Unbekannten Netzwerkspiel-Befehl empfangen"
   )
MSG_HASH(
   MSG_FILE_ALREADY_EXISTS_SAVING_TO_BACKUP_BUFFER,
   "Datei existiert bereits. Speichere im Backup-Puffer"
   )
MSG_HASH(
   MSG_GOT_CONNECTION_FROM,
   "Verbindung hergestellt mit: \"%s\""
   )
MSG_HASH(
   MSG_GOT_CONNECTION_FROM_NAME,
   "Verbindung hergestellt mit: \"%s (%s)\""
   )
MSG_HASH(
   MSG_PUBLIC_ADDRESS,
   "Netzwerkspiel-Port-Zuordnung erfolgreich"
   )
MSG_HASH(
   MSG_PRIVATE_OR_SHARED_ADDRESS,
   "Externes Netzwerk hat eine private oder gemeinsame Adresse. Erwäge die Verwendung eines Relay-Servers."
   )
MSG_HASH(
   MSG_UPNP_FAILED,
   "Netplay UPnP-Port-Zuordnung fehlgeschlagen"
   )
MSG_HASH(
   MSG_NO_ARGUMENTS_SUPPLIED_AND_NO_MENU_BUILTIN,
   "Keine Argumente angegeben und kein Menü integriert - zeige Hilfe an..."
   )
MSG_HASH(
   MSG_SETTING_DISK_IN_TRAY,
   "Lege Disc ins Laufwerk ein"
   )
MSG_HASH(
   MSG_WAITING_FOR_CLIENT,
   "Auf Client warten ..."
   )
MSG_HASH(
   MSG_ROOM_NOT_CONNECTABLE,
   "Auf Deinen Raum kann nicht über das Internet zugegriffen werden."
   )
MSG_HASH(
   MSG_NETPLAY_YOU_HAVE_LEFT_THE_GAME,
   "Du hast das Spiel verlassen"
   )
MSG_HASH(
   MSG_NETPLAY_YOU_HAVE_JOINED_AS_PLAYER_N,
   "Du bist als Spieler %u beigetreten"
   )
MSG_HASH(
   MSG_NETPLAY_YOU_HAVE_JOINED_WITH_INPUT_DEVICES_S,
   "Du bist mit Eigabegeräten %.*s beigetreten"
   )
MSG_HASH(
   MSG_NETPLAY_PLAYER_S_LEFT,
   "Spieler %.*s hat das Spiel verlassen"
   )
MSG_HASH(
   MSG_NETPLAY_S_HAS_JOINED_AS_PLAYER_N,
   "%.*s ist als Spieler %u beigetreten"
   )
MSG_HASH(
   MSG_NETPLAY_S_HAS_JOINED_WITH_INPUT_DEVICES_S,
   "%.*s ist mit Eingabegeräten %.*s beigetreten"
   )
MSG_HASH(
   MSG_NETPLAY_NOT_RETROARCH,
   "Ein Netzwerkspiel-Verbindungsversuch ist fehlgeschlagen, da beim Teilnehmer RetroArch nicht oder in einer älteren Version ausgeführt wird."
   )
MSG_HASH(
   MSG_NETPLAY_OUT_OF_DATE,
   "Ein Netplay-Teilnehmer nutzt eine alte RetroArch-Version. Verbindung nicht möglich."
   )
MSG_HASH(
   MSG_NETPLAY_DIFFERENT_VERSIONS,
   "WARNUNG: Ein Netzwerkspiel-Teilnehmer nutzt eine andere Version von RetroArch. Falls Probleme auftreten, benutzt dieselbe Version."
   )
MSG_HASH(
   MSG_NETPLAY_DIFFERENT_CORES,
   "Ein Netzwerkspiel-Teilnehmer nutzt einen anderen Core. Kann nicht verbinden."
   )
MSG_HASH(
   MSG_NETPLAY_DIFFERENT_CORE_VERSIONS,
   "WARNUNG: Ein Netzwerkspiel-Teilnehmer nutzt eine andere Version vom Core. Falls Probleme auftreten, benutzt dieselbe Version."
   )
MSG_HASH(
   MSG_NETPLAY_ENDIAN_DEPENDENT,
   "Dieser Core unterstützt kein Netzwerkspiel zwischen diesen Plattformen"
   )
MSG_HASH(
   MSG_NETPLAY_PLATFORM_DEPENDENT,
   "Dieser Core unterstützt kein Netzwerkspiel zwischen verschiedenen Plattformen"
   )
MSG_HASH(
   MSG_NETPLAY_ENTER_PASSWORD,
   "Gib das Server-Passwort ein:"
   )
MSG_HASH(
   MSG_NETPLAY_ENTER_CHAT,
   "Netzwerkspiel-Chatnachricht eingeben:"
   )
MSG_HASH(
   MSG_DISCORD_CONNECTION_REQUEST,
   "Möchtest Du eine Verbindung zulassen von:"
   )
MSG_HASH(
   MSG_NETPLAY_INCORRECT_PASSWORD,
   "Falsches Passwort"
   )
MSG_HASH(
   MSG_NETPLAY_SERVER_NAMED_HANGUP,
   "\"%s\" hat die Verbindung getrennt"
   )
MSG_HASH(
   MSG_NETPLAY_SERVER_HANGUP,
   "Ein Netzwerkspiel-Client hat die Verbindung getrennt"
   )
MSG_HASH(
   MSG_NETPLAY_CLIENT_HANGUP,
   "Verbindung mit Netzwerkspiel getrennt"
   )
MSG_HASH(
   MSG_NETPLAY_CANNOT_PLAY_UNPRIVILEGED,
   "Du hast nicht die Berechtigung, an diesem Spiel teilzunehmen"
   )
MSG_HASH(
   MSG_NETPLAY_CANNOT_PLAY_NO_SLOTS,
   "Es gibt keine freien Spieler-Plätze mehr"
   )
MSG_HASH(
   MSG_NETPLAY_CANNOT_PLAY_NOT_AVAILABLE,
   "Die angeforderten Eingabegeräte sind nicht verfügbar"
   )
MSG_HASH(
   MSG_NETPLAY_CANNOT_PLAY,
   "Konnte nicht zum Spieler-Modus wechseln"
   )
MSG_HASH(
   MSG_NETPLAY_PEER_PAUSED,
   "Netzwerkspiel-Teilnehmer \"%s\" hat pausiert"
   )
MSG_HASH(
   MSG_NETPLAY_CHANGED_NICK,
   "Dein Spitzname wurde geändert zu \"%s\""
   )
MSG_HASH(
   MSG_NETPLAY_KICKED_CLIENT_S,
   "Client rausgeschmissen: „%s“"
   )
MSG_HASH(
   MSG_NETPLAY_FAILED_TO_KICK_CLIENT_S,
   "Client konnte nicht rausgeschmissen werden: „%s“"
   )
MSG_HASH(
   MSG_NETPLAY_BANNED_CLIENT_S,
   "Client gesperrt: „%s“"
   )
MSG_HASH(
   MSG_NETPLAY_FAILED_TO_BAN_CLIENT_S,
   "Fehler beim Sperren des Clients: „%s“"
   )
MSG_HASH(
   MSG_NETPLAY_STATUS_PLAYING,
   "Im Spiel"
   )
MSG_HASH(
   MSG_NETPLAY_STATUS_SPECTATING,
   "Zuschauer"
   )
MSG_HASH(
   MSG_NETPLAY_CLIENT_DEVICES,
   "Geräte"
   )
MSG_HASH(
   MSG_NETPLAY_CHAT_SUPPORTED,
   "Chat unterstützt"
   )
MSG_HASH(
   MSG_NETPLAY_SLOWDOWNS_CAUSED,
   "Verursacht Verlangsamung"
   )

MSG_HASH(
   MSG_AUDIO_VOLUME,
   "Audio-Lautstärke"
   )
MSG_HASH(
   MSG_AUTODETECT,
   "Automatisch erkennen"
   )
MSG_HASH(
   MSG_AUTOLOADING_SAVESTATE_FROM,
   "Automatisches Laden des Speicherzustands aus"
   )
MSG_HASH(
   MSG_CAPABILITIES,
   "Fähigkeiten"
   )
MSG_HASH(
   MSG_CONNECTING_TO_NETPLAY_HOST,
   "Verbinde zu Netzwerkspiel"
   )
MSG_HASH(
   MSG_CONNECTING_TO_PORT,
   "Verbinde zu Port"
   )
MSG_HASH(
   MSG_CONNECTION_SLOT,
   "Verbindungs-Slot"
   )
MSG_HASH(
   MSG_FETCHING_CORE_LIST,
   "Core-Liste wird abgerufen..."
   )
MSG_HASH(
   MSG_CORE_LIST_FAILED,
   "Abrufen der Core-Liste fehlgeschlagen!"
   )
MSG_HASH(
   MSG_LATEST_CORE_INSTALLED,
   "Neueste Version bereits installiert: "
   )
MSG_HASH(
   MSG_UPDATING_CORE,
   "Aktualisiere Core: "
   )
MSG_HASH(
   MSG_DOWNLOADING_CORE,
   "Core wird heruntergeladen: "
   )
MSG_HASH(
   MSG_EXTRACTING_CORE,
   "Entpacke Core: "
   )
MSG_HASH(
   MSG_CORE_INSTALLED,
   "Core installiert: "
   )
MSG_HASH(
   MSG_CORE_INSTALL_FAILED,
   "Installieren des Cores fehlgeschlagen: "
   )
MSG_HASH(
   MSG_SCANNING_CORES,
   "Scanne Cores..."
   )
MSG_HASH(
   MSG_CHECKING_CORE,
   "Überprüfe Core: "
   )
MSG_HASH(
   MSG_ALL_CORES_UPDATED,
   "Alle installierten Cores sind aktuell"
   )
MSG_HASH(
   MSG_ALL_CORES_SWITCHED_PFD,
   "Alle unterstützten Cores wurden auf Play Store Versionen umgestellt"
   )
MSG_HASH(
   MSG_NUM_CORES_UPDATED,
   "Cores aktualisiert: "
   )
MSG_HASH(
   MSG_NUM_CORES_LOCKED,
   "Cores übersprungen: "
   )
MSG_HASH(
   MSG_CORE_UPDATE_DISABLED,
   "Core Update deaktiviert - Core gesperrt: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_RESETTING_CORES,
   "Setze Cores zurück: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_CORES_RESET,
   "Cores zurückgesetzt: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_CLEANING_PLAYLIST,
   "Reinige Spieleliste: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_PLAYLIST_CLEANED,
   "Spieleliste bereinigt: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_REFRESH_MISSING_CONFIG,
   "Aktualisieren fehlgeschlagen - Spieleliste enthält keinen gültigen Scan-Datensatz: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_REFRESH_INVALID_CONTENT_DIR,
   "Aktualisieren fehlgeschlagen - ungültiges/fehlendes Inhaltsverzeichnis: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_REFRESH_INVALID_SYSTEM_NAME,
   "Aktualisieren fehlgeschlagen - ungültiger/fehlender Systemname: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_REFRESH_INVALID_CORE,
   "Aktualisieren fehlgeschlagen - ungültiger Core: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_REFRESH_INVALID_DAT_FILE,
   "Aktualisieren fehlgeschlagen - ungültige/fehlende Arcade-DAT-Datei: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_REFRESH_DAT_FILE_TOO_LARGE,
   "Aktualisieren fehlgeschlagen - Arcade-DAT-Datei zu groß (zu wenig Speicher): "
   )
MSG_HASH(
   MSG_ADDED_TO_FAVORITES,
   "Zu Favoriten hinzugefügt"
   )
MSG_HASH(
   MSG_ADD_TO_FAVORITES_FAILED,
   "Favorit kann nicht hinzugefügt werden: Spieleliste voll"
   )
MSG_HASH(
   MSG_SET_CORE_ASSOCIATION,
   "Core zugeordnet: "
   )
MSG_HASH(
   MSG_RESET_CORE_ASSOCIATION,
   "Core-Zuordnung für den Spielelisteneintrag wurde zurückgesetzt."
   )
MSG_HASH(
   MSG_APPENDED_DISK,
   "Angefügte Disc"
   )
MSG_HASH(
   MSG_FAILED_TO_APPEND_DISK,
   "Anhängen der Disc fehlgeschlagen"
   )
MSG_HASH(
   MSG_APPLICATION_DIR,
   "Anwendungen"
   )
MSG_HASH(
   MSG_APPLYING_CHEAT,
   "Änderungen an Cheats werden übernommen."
   )
MSG_HASH(
   MSG_APPLYING_PATCH,
   "Patch angewandt: %s"
   )
MSG_HASH(
   MSG_APPLYING_SHADER,
   "Shader anwenden"
   )
MSG_HASH(
   MSG_AUDIO_MUTED,
   "Audio aus."
   )
MSG_HASH(
   MSG_AUDIO_UNMUTED,
   "Audio an."
   )
MSG_HASH(
   MSG_AUTOCONFIG_FILE_ERROR_SAVING,
   "Fehler beim Speichern des Controller-Profils."
   )
MSG_HASH(
   MSG_AUTOCONFIG_FILE_SAVED_SUCCESSFULLY,
   "Controller-Profil erfolgreich gespeichert."
   )
MSG_HASH(
   MSG_AUTOSAVE_FAILED,
   "Initialisierung der Autospeichern-Funktion fehlgeschlagen."
   )
MSG_HASH(
   MSG_AUTO_SAVE_STATE_TO,
   "Zustand automatisch speichern in"
   )
MSG_HASH(
   MSG_BRINGING_UP_COMMAND_INTERFACE_ON_PORT,
   "Starte Befehlsinterface auf Port"
   )
MSG_HASH(
   MSG_BYTES,
   "Bytes"
   )
MSG_HASH(
   MSG_CANNOT_INFER_NEW_CONFIG_PATH,
   "Kann neuen Konfigurationspfad nicht ableiten. Verwende aktuelle Zeit."
   )
MSG_HASH(
   MSG_CHEEVOS_HARDCORE_MODE_ENABLE,
   "Errungenschaften-Hardcore-Modus aktiviert. Savestates & Rückspul-Funktion sind nicht nutzbar."
   )
MSG_HASH(
   MSG_COMPARING_WITH_KNOWN_MAGIC_NUMBERS,
   "Vergleiche mit bekannten Magic Numbers..."
   )
MSG_HASH(
   MSG_COMPILED_AGAINST_API,
   "Kompiliert gegen API"
   )
MSG_HASH(
   MSG_CONFIG_DIRECTORY_NOT_SET,
   "Konfigurations-Verzeichnis nicht definiert. Kann neue Konfiguration nicht speichern."
   )
MSG_HASH(
   MSG_CONNECTED_TO,
   "Verbunden mit"
   )
MSG_HASH(
   MSG_CONTENT_CRC32S_DIFFER,
   "CRC32-Prüfsummen des Inhalts weichen ab. Andere Spiele können nicht verwendet werden."
   )
MSG_HASH(
   MSG_PING_TOO_HIGH,
   "Dein Ping ist zu hoch für diesen Host."
   )
MSG_HASH(
   MSG_CONTENT_LOADING_SKIPPED_IMPLEMENTATION_WILL_DO_IT,
   "Laden des Inhalts übersprungen. Die Implementierung wird ihn selbst laden."
   )
MSG_HASH(
   MSG_CORE_DOES_NOT_SUPPORT_SAVESTATES,
   "Core unterstützt keine Speicherabbilder."
   )
MSG_HASH(
   MSG_CORE_OPTIONS_FILE_CREATED_SUCCESSFULLY,
   "Core-Einstellungsdatei wurde erfolgreich erstellt."
   )
MSG_HASH(
   MSG_CORE_OPTIONS_FILE_REMOVED_SUCCESSFULLY,
   "Core-Einstellungsdatei erfolgreich entfernt."
   )
MSG_HASH(
   MSG_CORE_OPTIONS_RESET,
   "Alle Core-Einstellungen auf Standard zurückgesetzt."
   )
MSG_HASH(
   MSG_CORE_OPTIONS_FLUSHED,
   "Core-Optionen gespeichert in:"
   )
MSG_HASH(
   MSG_CORE_OPTIONS_FLUSH_FAILED,
   "Fehler beim Speichern der Core-Optionen in:"
   )
MSG_HASH(
   MSG_COULD_NOT_FIND_ANY_NEXT_DRIVER,
   "Konnte keinen nächsten Treiber finden"
   )
MSG_HASH(
   MSG_COULD_NOT_FIND_COMPATIBLE_SYSTEM,
   "Konnte kein kompatibles System finden"
   )
MSG_HASH(
   MSG_COULD_NOT_FIND_VALID_DATA_TRACK,
   "Konnte keinen gültigen Daten-Track finden"
   )
MSG_HASH(
   MSG_COULD_NOT_OPEN_DATA_TRACK,
   "Datentrack konnte nicht geöffnet werden"
   )
MSG_HASH(
   MSG_COULD_NOT_READ_CONTENT_FILE,
   "Konnte Inhalts-Datei nicht lesen"
   )
MSG_HASH(
   MSG_COULD_NOT_READ_MOVIE_HEADER,
   "Konnte Film-Header nicht lesen."
   )
MSG_HASH(
   MSG_COULD_NOT_READ_STATE_FROM_MOVIE,
   "Konnte Status der Filmdatei nicht lesen."
   )
MSG_HASH(
   MSG_CRC32_CHECKSUM_MISMATCH,
   "CRC32-Prüfsumme des Inhalts und die gespeicherte Prüfsumme der Replay-Datei stimmen nicht überein. Wird die Aufzeichnung wiedergegeben, wird sie sehr wahrscheinlich asynchron."
   )
MSG_HASH(
   MSG_CUSTOM_TIMING_GIVEN,
   "Benutzerdefiniertes Timing gefunden"
   )
MSG_HASH(
   MSG_DECOMPRESSION_ALREADY_IN_PROGRESS,
   "Dekompression läuft bereits."
   )
MSG_HASH(
   MSG_DECOMPRESSION_FAILED,
   "Dekompression fehlgeschlagen."
   )
MSG_HASH(
   MSG_DETECTED_VIEWPORT_OF,
   "Erkannte Bildbereich von"
   )
MSG_HASH(
   MSG_DID_NOT_FIND_A_VALID_CONTENT_PATCH,
   "Kein gültiger Patch für diesen Inhalt gefunden."
   )
MSG_HASH(
   MSG_DISCONNECT_DEVICE_FROM_A_VALID_PORT,
   "Gerät von einem gültigen Port trennen."
   )
MSG_HASH(
   MSG_DISK_CLOSED,
   "Virtuelles Laufwerk geschlossen."
   )
MSG_HASH(
   MSG_DISK_EJECTED,
   "Virtuelles Laufwerk ausgeworfen."
   )
MSG_HASH(
   MSG_DOWNLOADING,
   "Wird heruntergeladen"
   )
MSG_HASH(
   MSG_INDEX_FILE,
   "Index"
   )
MSG_HASH(
   MSG_DOWNLOAD_FAILED,
   "Herunterladen fehlgeschlagen"
   )
MSG_HASH(
   MSG_ERROR,
   "Fehler"
   )
MSG_HASH(
   MSG_ERROR_LIBRETRO_CORE_REQUIRES_CONTENT,
   "Libretro-Core benötigt Inhalt, es wurde jedoch keiner bereitgestellt."
   )
MSG_HASH(
   MSG_ERROR_LIBRETRO_CORE_REQUIRES_SPECIAL_CONTENT,
   "Libretro-Core benötigt speziellen Inhalt, es wurde jedoch keiner bereitgestellt."
   )
MSG_HASH(
   MSG_ERROR_LIBRETRO_CORE_REQUIRES_VFS,
   "Core unterstützt kein VFS und das Laden von einer lokalen Kopie ist fehlgeschlagen"
   )
MSG_HASH(
   MSG_ERROR_PARSING_ARGUMENTS,
   "Fehler beim Verarbeiten der Argumente."
   )
MSG_HASH(
   MSG_ERROR_SAVING_CORE_OPTIONS_FILE,
   "Fehler beim Speichern der Core-Einstellungsdatei."
   )
MSG_HASH(
   MSG_ERROR_REMOVING_CORE_OPTIONS_FILE,
   "Fehler beim Löschen der Core-Einstellungsdatei."
   )
MSG_HASH(
   MSG_ERROR_SAVING_REMAP_FILE,
   "Fehler beim Speichern der Remap-Datei."
   )
MSG_HASH(
   MSG_ERROR_REMOVING_REMAP_FILE,
   "Fehler beim Löschen der Remap-Datei."
   )
MSG_HASH(
   MSG_ERROR_SAVING_SHADER_PRESET,
   "Fehler beim Speichern der Shader-Voreinstellung."
   )
MSG_HASH(
   MSG_EXTERNAL_APPLICATION_DIR,
   "Externe Anwendungen"
   )
MSG_HASH(
   MSG_EXTRACTING,
   "Entpacke"
   )
MSG_HASH(
   MSG_EXTRACTING_FILE,
   "Entpacke Datei"
   )
MSG_HASH(
   MSG_FAILED_SAVING_CONFIG_TO,
   "Fehler beim Speichern der Konfiguration in"
   )
MSG_HASH(
   MSG_FAILED_TO_ACCEPT_INCOMING_SPECTATOR,
   "Ankommender Beobachter konnte nicht akzeptiert werden."
   )
MSG_HASH(
   MSG_FAILED_TO_ALLOCATE_MEMORY_FOR_PATCHED_CONTENT,
   "Zuweisung des Arbeitsspeichers für den gepatchten Inhalt fehlgeschlagen..."
   )
MSG_HASH(
   MSG_FAILED_TO_APPLY_SHADER,
   "Fehler beim Anwenden des Shaders."
   )
MSG_HASH(
   MSG_FAILED_TO_APPLY_SHADER_PRESET,
   "Shader-Voreinstellung konnte nicht angewendet werden:"
   )
MSG_HASH(
   MSG_FAILED_TO_BIND_SOCKET,
   "Fehler beim binden des Sockets."
   )
MSG_HASH(
   MSG_FAILED_TO_CREATE_THE_DIRECTORY,
   "Fehler beim Erstellen des Verzeichnisses."
   )
MSG_HASH(
   MSG_FAILED_TO_EXTRACT_CONTENT_FROM_COMPRESSED_FILE,
   "Fehler beim Entpacken des Inhalts aus dem Archiv"
   )
MSG_HASH(
   MSG_FAILED_TO_GET_NICKNAME_FROM_CLIENT,
   "Benutzername konnte vom Client nicht gelesen werden."
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD,
   "Laden fehlgeschlagen"
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD_CONTENT,
   "Laden des Inhalts fehlgeschlagen"
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD_MOVIE_FILE,
   "Laden der Filmdatei fehlgeschlagen"
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD_OVERLAY,
   "Laden des Overlays fehlgeschlagen."
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD_STATE,
   "Fehler beim Laden des Spielstands von"
   )
MSG_HASH(
   MSG_FAILED_TO_OPEN_LIBRETRO_CORE,
   "Öffnen des Libretro-Cores fehlgeschlagen"
   )
MSG_HASH(
   MSG_FAILED_TO_PATCH,
   "Patch fehlgeschlagen"
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_HEADER_FROM_CLIENT,
   "Client-Header konnte nicht empfangen werden."
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_NICKNAME,
   "Empfangen des Nickname fehlgeschlagen."
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_NICKNAME_FROM_HOST,
   "Empfangen des Nickname vom Host fehlgeschlagen."
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_NICKNAME_SIZE_FROM_HOST,
   "Länge des Nickname wurde vom Host nicht empfangen."
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_SRAM_DATA_FROM_HOST,
   "SRAM-Daten wurden vom Host nicht empfangen."
   )
MSG_HASH(
   MSG_FAILED_TO_REMOVE_DISK_FROM_TRAY,
   "Fehler beim Auswerfen der Disc."
   )
MSG_HASH(
   MSG_FAILED_TO_REMOVE_TEMPORARY_FILE,
   "Fehler beim entfernen der temporären Datei"
   )
MSG_HASH(
   MSG_FAILED_TO_SAVE_SRAM,
   "Fehler beim Speichern des SRAM"
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD_SRAM,
   "Fehler beim Laden des SRAM"
   )
MSG_HASH(
   MSG_FAILED_TO_SAVE_STATE_TO,
   "Fehler beim Speichern des Spielstands in"
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_NICKNAME,
   "Fehler beim Senden des Nickname."
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_NICKNAME_SIZE,
   "Fehler beim Senden der Nickname-Länge."
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_NICKNAME_TO_CLIENT,
   "Fehler beim Senden des Nickname zum Client."
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_NICKNAME_TO_HOST,
   "Fehler beim Senden des Nickname zum Host."
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_SRAM_DATA_TO_CLIENT,
   "Fehler beim Senden der SRAM-Daten zum Client."
   )
MSG_HASH(
   MSG_FAILED_TO_START_AUDIO_DRIVER,
   "Audiotreiber konnte nicht gestartet werden. Fahre ohne Audio fort."
   )
MSG_HASH(
   MSG_FAILED_TO_START_MOVIE_RECORD,
   "Konnte Film-Aufzeichnung nicht starten."
   )
MSG_HASH(
   MSG_FAILED_TO_START_RECORDING,
   "Aufzeichnung konnte nicht starten."
   )
MSG_HASH(
   MSG_FAILED_TO_TAKE_SCREENSHOT,
   "Konnte Screenshot nicht erstellen."
   )
MSG_HASH(
   MSG_FAILED_TO_UNDO_LOAD_STATE,
   "Laden des Savestates konnte nicht rückgängig gemacht werden."
   )
MSG_HASH(
   MSG_FAILED_TO_UNDO_SAVE_STATE,
   "Speichern des Savestates konnte nicht rückgängig gemacht werden."
   )
MSG_HASH(
   MSG_FAILED_TO_UNMUTE_AUDIO,
   "Audio konnte nicht eingeschaltet werden."
   )
MSG_HASH(
   MSG_FATAL_ERROR_RECEIVED_IN,
   "Fataler Fehler in"
   )
MSG_HASH(
   MSG_FILE_NOT_FOUND,
   "Datei nicht gefunden"
   )
MSG_HASH(
   MSG_FOUND_AUTO_SAVESTATE_IN,
   "Spielstand gefunden in"
   )
MSG_HASH(
   MSG_FOUND_DISK_LABEL,
   "Disc-Label gefunden"
   )
MSG_HASH(
   MSG_FOUND_FIRST_DATA_TRACK_ON_FILE,
   "Ersten Daten-Track in der Datei gefunden"
   )
MSG_HASH(
   MSG_FOUND_LAST_STATE_SLOT,
   "Letzten Speicherplatz gefunden"
   )
MSG_HASH(
   MSG_FOUND_LAST_REPLAY_SLOT,
   "Letzten Replayslot gefunden"
   )
MSG_HASH(
   MSG_REPLAY_LOAD_STATE_FAILED_INCOMPAT,
   "Nicht von aktueller Aufnahme"
   )
MSG_HASH(
   MSG_REPLAY_LOAD_STATE_HALT_INCOMPAT,
   "Nicht kompatibel mit Replay"
   )
MSG_HASH(
   MSG_FOUND_SHADER,
   "Shader gefunden"
   )
MSG_HASH(
   MSG_FRAMES,
   "Bilder"
   )
MSG_HASH(
   MSG_GAME_SPECIFIC_CORE_OPTIONS_FOUND_AT,
   "Spielspezifische Core-Optionen gefunden in"
   )
MSG_HASH(
   MSG_FOLDER_SPECIFIC_CORE_OPTIONS_FOUND_AT,
   "Ordnerspezifische Core-Optionen gefunden in"
   )
MSG_HASH(
   MSG_GOT_INVALID_DISK_INDEX,
   "Ungültiger Disc-Index."
   )
MSG_HASH(
   MSG_GRAB_MOUSE_STATE,
   "Maus-Status"
   )
MSG_HASH(
   MSG_GAME_FOCUS_ON,
   "Spielfokus ein"
   )
MSG_HASH(
   MSG_GAME_FOCUS_OFF,
   "Spielfokus aus"
   )
MSG_HASH(
   MSG_HW_RENDERED_MUST_USE_POSTSHADED_RECORDING,
   "Der Libretro-Core ist Hardware-gerendert. GPU-Aufzeichnung muss ebenfalls aktiviert werden."
   )
MSG_HASH(
   MSG_INFLATED_CHECKSUM_DID_NOT_MATCH_CRC32,
   "Prüfsumme entspricht nicht CRC32."
   )
MSG_HASH(
   MSG_INPUT_CHEAT,
   "Cheat eingeben"
   )
MSG_HASH(
   MSG_INPUT_CHEAT_FILENAME,
   "Cheat-Dateiname"
   )
MSG_HASH(
   MSG_INPUT_PRESET_FILENAME,
   "Vorlagen-Dateiname"
   )
MSG_HASH(
   MSG_INPUT_RENAME_ENTRY,
   "Titel umbenennen"
   )
MSG_HASH(
   MSG_INTERFACE,
   "Netzwerk-Karte"
   )
MSG_HASH(
   MSG_INTERNAL_STORAGE,
   "Interner Speicher"
   )
MSG_HASH(
   MSG_REMOVABLE_STORAGE,
   "Wechseldatenträger"
   )
MSG_HASH(
   MSG_INVALID_NICKNAME_SIZE,
   "Ungültige Nickname-Länge."
   )
MSG_HASH(
   MSG_IN_BYTES,
   "in Bytes"
   )
MSG_HASH(
   MSG_IN_MEGABYTES,
   "in Megabyte"
   )
MSG_HASH(
   MSG_IN_GIGABYTES,
   "in Gigabyte"
   )
MSG_HASH(
   MSG_LIBRETRO_ABI_BREAK,
   "ist für eine andere Libretro-Version als diese kompiliert worden."
   )
MSG_HASH(
   MSG_LIBRETRO_FRONTEND,
   "Frontend für Libretro"
   )
MSG_HASH(
   MSG_LOADED_STATE_FROM_SLOT,
   "Spielstand aus Speicherplatz #%d geladen."
   )
MSG_HASH(
   MSG_LOADED_STATE_FROM_SLOT_AUTO,
   "Spielstand aus Speicherplatz #-1 (auto) geladen."
   )
MSG_HASH(
   MSG_LOADING,
   "Wird geladen"
   )
MSG_HASH(
   MSG_FIRMWARE,
   "Eine oder mehrere Firmware-Dateien fehlen"
   )
MSG_HASH(
   MSG_LOADING_CONTENT_FILE,
   "Inhalts-Datei wird geladen"
   )
MSG_HASH(
   MSG_LOADING_HISTORY_FILE,
   "Verlaufs-Datei wird geladen"
   )
MSG_HASH(
   MSG_LOADING_FAVORITES_FILE,
   "Favoritendatei wird geladen"
   )
MSG_HASH(
   MSG_LOADING_STATE,
   "Savestate wird geladen"
   )
MSG_HASH(
   MSG_MEMORY,
   "Speicher"
   )
MSG_HASH(
   MSG_MOVIE_FILE_IS_NOT_A_VALID_REPLAY_FILE,
   "Eingegebene Replay-Filmdatei ist keine gültige REPLAY-Datei."
   )
MSG_HASH(
   MSG_MOVIE_FORMAT_DIFFERENT_SERIALIZER_VERSION,
   "Filmdatei besitzt offenbar eine andere Serializer-Version. Wird höchstwahrscheinlich fehlschlagen."
   )
MSG_HASH(
   MSG_MOVIE_PLAYBACK_ENDED,
   "Film-Wiedergabe beendet."
   )
MSG_HASH(
   MSG_MOVIE_RECORD_STOPPED,
   "Beende Film-Aufzeichnung."
   )
MSG_HASH(
   MSG_NETPLAY_FAILED,
   "Netzwerkspiel-Initialisierung fehlgeschlagen."
   )
MSG_HASH(
   MSG_NETPLAY_UNSUPPORTED,
   "Core unterstützt kein Netzwerkspiel."
   )
MSG_HASH(
   MSG_NO_CONTENT_STARTING_DUMMY_CORE,
   "Kein Inhalt, starte Dummy-Core."
   )
MSG_HASH(
   MSG_NO_SAVE_STATE_HAS_BEEN_OVERWRITTEN_YET,
   "Kein Spielstand wurde bis jetzt überschrieben."
   )
MSG_HASH(
   MSG_NO_STATE_HAS_BEEN_LOADED_YET,
   "Kein Spielstand wurde bis jetzt geladen."
   )
MSG_HASH(
   MSG_OVERRIDES_ERROR_SAVING,
   "Fehler beim Speichern der Überschreibungen."
   )
MSG_HASH(
   MSG_OVERRIDES_ERROR_REMOVING,
   "Fehler beim Entfernen der Überschreibungen."
   )
MSG_HASH(
   MSG_OVERRIDES_SAVED_SUCCESSFULLY,
   "Überschreibungen erfolgreich gespeichert."
   )
MSG_HASH(
   MSG_OVERRIDES_REMOVED_SUCCESSFULLY,
   "Überschreibungen erfolgreich entfernt."
   )
MSG_HASH(
   MSG_OVERRIDES_UNLOADED_SUCCESSFULLY,
   "Überschreibungen erfolgreich zurückgesetzt."
   )
MSG_HASH(
   MSG_OVERRIDES_NOT_SAVED,
   "Nichts zu speichern. Überschreibungen nicht gespeichert."
   )
MSG_HASH(
   MSG_OVERRIDES_ACTIVE_NOT_SAVING,
   "Wird nicht gespeichert. Überschreibungen sind aktiv."
   )
MSG_HASH(
   MSG_PAUSED,
   "Pausiert."
   )
MSG_HASH(
   MSG_READING_FIRST_DATA_TRACK,
   "Lese ersten Daten-Track..."
   )
MSG_HASH(
   MSG_RECORDING_TERMINATED_DUE_TO_RESIZE,
   "Aufzeichnung wurde wegen Größenänderung beendet."
   )
MSG_HASH(
   MSG_RECORDING_TO,
   "Aufzeichen in"
   )
MSG_HASH(
   MSG_REDIRECTING_CHEATFILE_TO,
   "Cheat-Datei umleiten in"
   )
MSG_HASH(
   MSG_REDIRECTING_SAVEFILE_TO,
   "Speicherdaten umleiten in"
   )
MSG_HASH(
   MSG_REDIRECTING_SAVESTATE_TO,
   "Spielstand umleiten in"
   )
MSG_HASH(
   MSG_REMAP_FILE_SAVED_SUCCESSFULLY,
   "Remap-Datei wurde erfolgreich gespeichert."
   )
MSG_HASH(
   MSG_REMAP_FILE_REMOVED_SUCCESSFULLY,
   "Remap-Datei wurde erfolgreich entfernt."
   )
MSG_HASH(
   MSG_REMAP_FILE_RESET,
   "Alle Tastenzuordnungsoptionen auf Standardwerte zurückgesetzt."
   )
MSG_HASH(
   MSG_REMOVED_DISK_FROM_TRAY,
   "Datenträger aus Laufwerk entfernt."
   )
MSG_HASH(
   MSG_REMOVING_TEMPORARY_CONTENT_FILE,
   "Entferne temporäre Inhalts-Datei"
   )
MSG_HASH(
   MSG_RESET,
   "Zurücksetzen"
   )
MSG_HASH(
   MSG_RESTARTING_RECORDING_DUE_TO_DRIVER_REINIT,
   "Starte Aufzeichnung neu, da Treiber reinitialisiert wurde."
   )
MSG_HASH(
   MSG_RESTORED_OLD_SAVE_STATE,
   "Alter Spielstand wiederhergestellt"
   )
MSG_HASH(
   MSG_RESTORING_DEFAULT_SHADER_PRESET_TO,
   "Shader: Standard-Shader-Voreinstellung wiederhergestellt zu"
   )
MSG_HASH(
   MSG_REVERTING_SAVEFILE_DIRECTORY_TO,
   "Setze Speicherdaten-Verzeichnis zurück auf"
   )
MSG_HASH(
   MSG_REVERTING_SAVESTATE_DIRECTORY_TO,
   "Setze Spielstand-Verzeichnis zurück auf"
   )
MSG_HASH(
   MSG_REWINDING,
   "Zurückspulen."
   )
MSG_HASH(
   MSG_REWIND_UNSUPPORTED,
   "Zurückspringen nicht verfügbar, da dieser Core keine serialisierte Savestate-Unterstützung bietet."
   )
MSG_HASH(
   MSG_REWIND_INIT,
   "Initialisiere Rückspul-Puffer mit Größe"
   )
MSG_HASH(
   MSG_REWIND_INIT_FAILED,
   "Fehler beim Initialisieren des Rückspul-Puffers. Zurückspulen wird deaktiviert."
   )
MSG_HASH(
   MSG_REWIND_INIT_FAILED_THREADED_AUDIO,
   "Implementierung verwendet separaten Audio-Thread. Zurückspulen kann nicht verwendet werden."
   )
MSG_HASH(
   MSG_REWIND_REACHED_END,
   "Ende des Rückspul-Puffers erreicht."
   )
MSG_HASH(
   MSG_SAVED_NEW_CONFIG_TO,
   "Neue Konfiguration gespeichert in"
   )
MSG_HASH(
   MSG_SAVED_STATE_TO_SLOT,
   "Spielstand in Speicherplatz #%d gespeichert."
   )
MSG_HASH(
   MSG_SAVED_STATE_TO_SLOT_AUTO,
   "Spielstand in Speicherplatz #-1 (auto) gespeichert."
   )
MSG_HASH(
   MSG_SAVED_SUCCESSFULLY_TO,
   "Erfolgreich gespeichert in"
   )
MSG_HASH(
   MSG_SAVING_RAM_TYPE,
   "Speichere RAM-Typ"
   )
MSG_HASH(
   MSG_SAVING_STATE,
   "Speichere aktuellen Zustand (Savestate)"
   )
MSG_HASH(
   MSG_SCANNING,
   "Scanne"
   )
MSG_HASH(
   MSG_SCANNING_OF_DIRECTORY_FINISHED,
   "Verzeichnisscan abgeschlossen"
   )
MSG_HASH(
   MSG_SENDING_COMMAND,
   "Sende Befehl"
   )
MSG_HASH(
   MSG_SEVERAL_PATCHES_ARE_EXPLICITLY_DEFINED,
   "Mehrere Patches wurden explizit definiert, ignoriere alle..."
   )
MSG_HASH(
   MSG_SHADER_PRESET_SAVED_SUCCESSFULLY,
   "Shader-Voreinstellung erfolgreich gespeichert."
   )
MSG_HASH(
   MSG_SLOW_MOTION,
   "Zeitlupe."
   )
MSG_HASH(
   MSG_FAST_FORWARD,
   "Vorspulen."
   )
MSG_HASH(
   MSG_SLOW_MOTION_REWIND,
   "In Zeitlupe zurückspulen."
   )
MSG_HASH(
   MSG_SKIPPING_SRAM_LOAD,
   "Überspringe Laden des SRAM."
   )
MSG_HASH(
   MSG_SRAM_WILL_NOT_BE_SAVED,
   "SRAM wird nicht gespeichert."
   )
MSG_HASH(
   MSG_BLOCKING_SRAM_OVERWRITE,
   "Überschreiben des SRAM blockieren"
   )
MSG_HASH(
   MSG_STARTING_MOVIE_PLAYBACK,
   "Starte Film-Wiedergabe."
   )
MSG_HASH(
   MSG_STARTING_MOVIE_RECORD_TO,
   "Starte Film-Aufzeichnung in"
   )
MSG_HASH(
   MSG_STATE_SIZE,
   "Spielstand-Größe"
   )
MSG_HASH(
   MSG_STATE_SLOT,
   "Spielstand-Speicherplatz"
   )
MSG_HASH(
   MSG_REPLAY_SLOT,
   "Replayslot"
   )
MSG_HASH(
   MSG_TAKING_SCREENSHOT,
   "Erstelle Screenshot."
   )
MSG_HASH(
   MSG_SCREENSHOT_SAVED,
   "Screenshot gespeichert"
   )
MSG_HASH(
   MSG_ACHIEVEMENT_UNLOCKED,
   "Errungenschaft freigeschaltet"
   )
MSG_HASH(
   MSG_LEADERBOARD_STARTED,
   "Ranglistenversuch gestartet"
   )
MSG_HASH(
   MSG_LEADERBOARD_FAILED,
   "Ranglistenversuch fehlgeschlagen"
   )
MSG_HASH(
   MSG_LEADERBOARD_SUBMISSION,
   "%s für %s eingereicht" /* Submitted [value] for [leaderboard name] */
   )
MSG_HASH(
   MSG_CHANGE_THUMBNAIL_TYPE,
   "Vorschaubildart ändern"
   )
MSG_HASH(
   MSG_TOGGLE_FULLSCREEN_THUMBNAILS,
   "Vollbild-Vorschaubilder"
   )
MSG_HASH(
   MSG_TOGGLE_CONTENT_METADATA,
   "Metadaten umschalten"
   )
MSG_HASH(
   MSG_NO_THUMBNAIL_AVAILABLE,
   "Kein Vorschaubild verfügbar"
   )
MSG_HASH(
   MSG_PRESS_AGAIN_TO_QUIT,
   "Zum Beenden erneut drücken..."
   )
MSG_HASH(
   MSG_TO,
   "nach"
   )
MSG_HASH(
   MSG_UNDID_LOAD_STATE,
   "Laden des Spielstands wurde rückgängig gemacht."
   )
MSG_HASH(
   MSG_UNDOING_SAVE_STATE,
   "Speichern des Savestates wird rückgängig gemacht"
   )
MSG_HASH(
   MSG_UNKNOWN,
   "Unbekannt"
   )
MSG_HASH(
   MSG_UNPAUSED,
   "Fortgesetzt."
   )
MSG_HASH(
   MSG_UNRECOGNIZED_COMMAND,
   "Unbekannten Befehl \"%s\" erhalten.\n"
   )
MSG_HASH(
   MSG_USING_CORE_NAME_FOR_NEW_CONFIG,
   "Verwende Core-Namen für neue Konfiguration."
   )
MSG_HASH(
   MSG_USING_LIBRETRO_DUMMY_CORE_RECORDING_SKIPPED,
   "Libretro-Dummy-Core wird verwendet. Aufzeichnung übersprungen."
   )
MSG_HASH(
   MSG_VALUE_CONNECT_DEVICE_FROM_A_VALID_PORT,
   "Verbinde Gerät mit einem gültigen Port."
   )
MSG_HASH(
   MSG_VALUE_DISCONNECTING_DEVICE_FROM_PORT,
   "Trenne Gerät von Port"
   )
MSG_HASH(
   MSG_VALUE_REBOOTING,
   "Neustart..."
   )
MSG_HASH(
   MSG_VALUE_SHUTTING_DOWN,
   "Beenden..."
   )
MSG_HASH(
   MSG_VERSION_OF_LIBRETRO_API,
   "Version der Libretro-API"
   )
MSG_HASH(
   MSG_VIEWPORT_SIZE_CALCULATION_FAILED,
   "Berechnung der Bildgröße fehlgeschlagen! Wird unter Verwendung von Rohdaten fortfahren. Dies wird wahrscheinlich nicht richtig funktionieren ..."
   )
MSG_HASH(
   MSG_VIRTUAL_DISK_TRAY_EJECT,
   "Virtuelles Laufwerk konnte nicht ausgeworfen werden."
   )
MSG_HASH(
   MSG_VIRTUAL_DISK_TRAY_CLOSE,
   "Virtuelles Laufwerk konnte nicht geschlossen werden."
   )
MSG_HASH(
   MSG_AUTOLOADING_SAVESTATE_FAILED,
   "Automatisches Laden des Savestates aus \"%s\" fehlgeschlagen."
   )
MSG_HASH(
   MSG_AUTOLOADING_SAVESTATE_SUCCEEDED,
   "Automatisches Laden des Savestates aus \"%s\" erfolgreich."
   )
MSG_HASH(
   MSG_DEVICE_CONFIGURED_IN_PORT,
   "in Port konfiguriert"
   )
MSG_HASH(
   MSG_DEVICE_CONFIGURED_IN_PORT_NR,
   "%s konfiguriert in Port %u"
   )
MSG_HASH(
   MSG_DEVICE_DISCONNECTED_FROM_PORT,
   "von Port getrennt"
   )
MSG_HASH(
   MSG_DEVICE_DISCONNECTED_FROM_PORT_NR,
   "%s wurde von Port %u getrennt"
   )
MSG_HASH(
   MSG_DEVICE_NOT_CONFIGURED,
   "nicht konfiguriert"
   )
MSG_HASH(
   MSG_DEVICE_NOT_CONFIGURED_NR,
   "%s (%u/%u) nicht konfiguriert"
   )
MSG_HASH(
   MSG_DEVICE_NOT_CONFIGURED_FALLBACK,
   "nicht konfiguriert, verwende Rückfalloption"
   )
MSG_HASH(
   MSG_DEVICE_NOT_CONFIGURED_FALLBACK_NR,
   "%s (%u/%u) nicht konfiguriert, verwendet Rückfalloption"
   )
MSG_HASH(
   MSG_BLUETOOTH_SCAN_COMPLETE,
   "Bluetooth-Scan abgeschlossen."
   )
MSG_HASH(
   MSG_BLUETOOTH_PAIRING_REMOVED,
   "Kopplung entfernt. RetroArch neu starten, um erneut zu verbinden/koppeln."
   )
MSG_HASH(
   MSG_WIFI_SCAN_COMPLETE,
   "Suche nach WLAN-Netzwerken abgeschlossen."
   )
MSG_HASH(
   MSG_SCANNING_BLUETOOTH_DEVICES,
   "Suche nach Bluetooth-Geräten..."
   )
MSG_HASH(
   MSG_SCANNING_WIRELESS_NETWORKS,
   "Suche nach WLAN-Netzwerken..."
   )
MSG_HASH(
   MSG_ENABLING_WIRELESS,
   "Aktiviere WLAN..."
   )
MSG_HASH(
   MSG_DISABLING_WIRELESS,
   "Deaktiviere WLAN..."
   )
MSG_HASH(
   MSG_DISCONNECTING_WIRELESS,
   "Trenne WLAN..."
   )
MSG_HASH(
   MSG_NETPLAY_LAN_SCANNING,
   "Suche nach Netzwerkspielen..."
   )
MSG_HASH(
   MSG_PREPARING_FOR_CONTENT_SCAN,
   "Bereite Inhaltsscan vor..."
   )
MSG_HASH(
   MSG_INPUT_ENABLE_SETTINGS_PASSWORD,
   "Passwort eingeben"
   )
MSG_HASH(
   MSG_INPUT_ENABLE_SETTINGS_PASSWORD_OK,
   "Passwort korrekt."
   )
MSG_HASH(
   MSG_INPUT_ENABLE_SETTINGS_PASSWORD_NOK,
   "Passwort falsch."
   )
MSG_HASH(
   MSG_INPUT_KIOSK_MODE_PASSWORD,
   "Passwort eingeben"
   )
MSG_HASH(
   MSG_INPUT_KIOSK_MODE_PASSWORD_OK,
   "Passwort korrekt."
   )
MSG_HASH(
   MSG_INPUT_KIOSK_MODE_PASSWORD_NOK,
   "Passwort falsch."
   )
MSG_HASH(
   MSG_CONFIG_OVERRIDE_LOADED,
   "Konfigurationsüberschreibung geladen."
   )
MSG_HASH(
   MSG_GAME_REMAP_FILE_LOADED,
   "Spiel-Remap-Datei geladen."
   )
MSG_HASH(
   MSG_DIRECTORY_REMAP_FILE_LOADED,
   "Inhaltsverzeichnis-Remap-Datei geladen."
   )
MSG_HASH(
   MSG_CORE_REMAP_FILE_LOADED,
   "Core Remap-Datei geladen."
   )
MSG_HASH(
   MSG_REMAP_FILE_FLUSHED,
   "Eingabe-Remap-Optionen gespeichert in:"
   )
MSG_HASH(
   MSG_REMAP_FILE_FLUSH_FAILED,
   "Fehler beim Speichern der Eingabe-Remap-Optionen in:"
   )
MSG_HASH(
   MSG_RUNAHEAD_ENABLED,
   "Run-Ahead aktiviert. Latenz-Frames entfernt: %u."
   )
MSG_HASH(
   MSG_RUNAHEAD_ENABLED_WITH_SECOND_INSTANCE,
   "Run-Ahead aktiviert mit Sekundärinstanz. Latenz-Frames entfernt: %u."
   )
MSG_HASH(
   MSG_RUNAHEAD_DISABLED,
   "Run-Ahead deaktiviert."
   )
MSG_HASH(
   MSG_RUNAHEAD_CORE_DOES_NOT_SUPPORT_SAVESTATES,
   "Run-Ahead wurde deaktiviert, da dieser Core keine Savestates unterstützt."
   )
MSG_HASH(
   MSG_RUNAHEAD_CORE_DOES_NOT_SUPPORT_RUNAHEAD,
   "Run-Ahead nicht verfügbar, da dieser Core keine deterministische Savestate-Unterstützung bietet."
   )
MSG_HASH(
   MSG_RUNAHEAD_FAILED_TO_SAVE_STATE,
   "Erstellen des Savestates fehlgeschlagen. Run-Ahead wurde deaktiviert."
   )
MSG_HASH(
   MSG_RUNAHEAD_FAILED_TO_LOAD_STATE,
   "Laden des Savestates fehlgeschlagen. Run-Ahead wurde deaktiviert."
   )
MSG_HASH(
   MSG_RUNAHEAD_FAILED_TO_CREATE_SECONDARY_INSTANCE,
   "Fehler beim Erstellen der zweiten Instanz. Run-Ahead wird nun nur noch eine Instanz verwenden."
   )
MSG_HASH(
   MSG_PREEMPT_ENABLED,
   "Präemptive Frames aktiviert. Latenzframes entfernt: %u."
   )
MSG_HASH(
   MSG_PREEMPT_DISABLED,
   "Präemptive Frames deaktiviert."
   )
MSG_HASH(
   MSG_PREEMPT_CORE_DOES_NOT_SUPPORT_SAVESTATES,
   "Präemptive Frames wurden deaktiviert, da dieser Core keine Savestates unterstützt."
   )
MSG_HASH(
   MSG_PREEMPT_CORE_DOES_NOT_SUPPORT_PREEMPT,
   "Präemptive Frames sind nicht verfügbar, da dieser Core keine deterministische Savestate-Unterstüzung bietet."
   )
MSG_HASH(
   MSG_PREEMPT_FAILED_TO_ALLOCATE,
   "Speicher für präemptive Frames konnte nicht zugewiesen werden."
   )
MSG_HASH(
   MSG_PREEMPT_FAILED_TO_SAVE_STATE,
   "Erstellen des Savestates fehlgeschlagen. Präemptive Frames wurden deaktiviert."
   )
MSG_HASH(
   MSG_PREEMPT_FAILED_TO_LOAD_STATE,
   "Laden des Savestates fehlgeschlagen. Präemptive Frames wurden deaktiviert."
   )
MSG_HASH(
   MSG_SCANNING_OF_FILE_FINISHED,
   "Dateiscan abgeschlossen"
   )
MSG_HASH(
   MSG_CHEAT_INIT_SUCCESS,
   "Cheat-Suche erfolgreich gestartet"
   )
MSG_HASH(
   MSG_CHEAT_INIT_FAIL,
   "Fehler beim Starten der Cheat-Suche"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_NOT_INITIALIZED,
   "Suche wurde nicht initialisiert/gestartet"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_FOUND_MATCHES,
   "Neue Trefferzahl = %u"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADDED_MATCHES_SUCCESS,
   "%u Treffer hinzugefügt"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADDED_MATCHES_FAIL,
   "Fehler beim Hinzufügen von Treffern"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADD_MATCH_SUCCESS,
   "Code zum Treffer erstellt"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADD_MATCH_FAIL,
   "Fehler beim Erstellen des Codes"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_DELETE_MATCH_SUCCESS,
   "Treffer gelöscht"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADDED_MATCHES_TOO_MANY,
   "Nicht genügend Platz. Die maximale Anzahl an gleichzeitigen Cheats ist 100."
   )
MSG_HASH(
   MSG_CHEAT_ADD_TOP_SUCCESS,
   "Neuer Cheat am Anfang der Liste hinzugefügt."
   )
MSG_HASH(
   MSG_CHEAT_ADD_BOTTOM_SUCCESS,
   "Neuer Cheat am Ende der Liste hinzugefügt."
   )
MSG_HASH(
   MSG_CHEAT_DELETE_ALL_SUCCESS,
   "Alle Cheats gelöscht."
   )
MSG_HASH(
   MSG_CHEAT_ADD_BEFORE_SUCCESS,
   "Neuer Cheat vor diesem hinzugefügt."
   )
MSG_HASH(
   MSG_CHEAT_ADD_AFTER_SUCCESS,
   "Neuer Cheat nach diesem hinzugefügt."
   )
MSG_HASH(
   MSG_CHEAT_COPY_BEFORE_SUCCESS,
   "Cheat vor diesem kopiert."
   )
MSG_HASH(
   MSG_CHEAT_COPY_AFTER_SUCCESS,
   "Cheat nach diesem kopiert."
   )
MSG_HASH(
   MSG_CHEAT_DELETE_SUCCESS,
   "Cheat gelöscht."
   )
MSG_HASH(
   MSG_FAILED_TO_SET_DISK,
   "Fehler beim Einsetzen der Disc"
   )
MSG_HASH(
   MSG_FAILED_TO_SET_INITIAL_DISK,
   "Fehler beim Einsetzen der zuletzt benutzten Disc..."
   )
MSG_HASH(
   MSG_FAILED_TO_CONNECT_TO_CLIENT,
   "Verbindung zum Client fehlgeschlagen"
   )
MSG_HASH(
   MSG_FAILED_TO_CONNECT_TO_HOST,
   "Verbindung zum Host fehlgeschlagen"
   )
MSG_HASH(
   MSG_NETPLAY_HOST_FULL,
   "Netzwerkspiel voll"
   )
MSG_HASH(
   MSG_NETPLAY_BANNED,
   "Du wurdest aus diesem Host ausgeschlossen"
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_HEADER_FROM_HOST,
   "Host-Header konnte nicht empfangen werden"
   )
MSG_HASH(
   MSG_CHEEVOS_LOAD_STATE_PREVENTED_BY_HARDCORE_MODE,
   "Du musst den Errungenschaften-Hardcore-Modus pausieren oder deaktivieren um Savestates laden zu können."
   )
MSG_HASH(
   MSG_CHEEVOS_HARDCORE_MODE_DISABLED,
   "Ein Savestate wurde geladen. Errungenschaften-Hardcore-Modus wurde für die aktuelle Sitzung deaktiviert."
   )
MSG_HASH(
   MSG_CHEEVOS_HARDCORE_MODE_DISABLED_CHEAT,
   "Ein Cheat wurde aktiviert. Errungenschaften-Hardcore-Modus wurde für die aktuelle Sitzung deaktiviert."
   )
MSG_HASH(
   MSG_CHEEVOS_MASTERED_GAME,
   "%s gemeistert"
   )
MSG_HASH(
   MSG_CHEEVOS_COMPLETED_GAME,
   "%s vervollständigt"
   )
MSG_HASH(
   MSG_RESAMPLER_QUALITY_LOWEST,
   "Niedrigste"
   )
MSG_HASH(
   MSG_RESAMPLER_QUALITY_LOWER,
   "Niedriger"
   )
MSG_HASH(
   MSG_RESAMPLER_QUALITY_HIGHER,
   "Höher"
   )
MSG_HASH(
   MSG_RESAMPLER_QUALITY_HIGHEST,
   "Höchste"
   )
MSG_HASH(
   MSG_MISSING_ASSETS,
   "Warnung: Fehlende Assets; verwenden Sie den Online-Updater, falls verfügbar"
   )
MSG_HASH(
   MSG_RGUI_MISSING_FONTS,
   "Warnung: Fehlende Schriftarten für die ausgewählte Sprache, verwenden Sie den Online-Updater, falls verfügbar"
   )
MSG_HASH(
   MSG_RGUI_INVALID_LANGUAGE,
   "Warnung: Nicht unterstützte Sprache - benutze Englisch"
   )
MSG_HASH(
   MSG_DUMPING_DISC,
   "Dumpe Disc..."
   )
MSG_HASH(
   MSG_DRIVE_NUMBER,
   "Laufwerk %d"
   )
MSG_HASH(
   MSG_LOAD_CORE_FIRST,
   "Bitte zuerst einen Core laden."
   )
MSG_HASH(
   MSG_DISC_DUMP_FAILED_TO_READ_FROM_DRIVE,
   "Fehler beim Lesen vom Laufwerk. Dump abgebrochen."
   )
MSG_HASH(
   MSG_DISC_DUMP_FAILED_TO_WRITE_TO_DISK,
   "Fehler beim Schreiben. Dump abgebrochen."
   )
MSG_HASH(
   MSG_NO_DISC_INSERTED,
   "Es ist keine Disc in das Laufwerk eingelegt."
   )
MSG_HASH(
   MSG_SHADER_PRESET_REMOVED_SUCCESSFULLY,
   "Shader-Voreinstellung erfolgreich entfernt."
   )
MSG_HASH(
   MSG_ERROR_REMOVING_SHADER_PRESET,
   "Fehler beim Löschen der Shader-Voreinstellung."
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_DAT_FILE_INVALID,
   "Ungültige Arcade-DAT-Datei ausgewählt"
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_DAT_FILE_TOO_LARGE,
   "Ausgewählte Arcade-DAT-Datei ist zu groß (unzureichender freier Speicher)"
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_DAT_FILE_LOAD_ERROR,
   "Fehler beim Laden der Arcade-DAT-Datei (ungültiges Format?)"
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_INVALID_CONFIG,
   "Ungültige manuelle Scan-Konfiguration"
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_INVALID_CONTENT,
   "Keine Spiele gefunden"
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_START,
   "Scanne: "
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_PLAYLIST_CLEANUP,
   "Aktuelle Einträge werden geprüft: "
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_IN_PROGRESS,
   "Scanne: "
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_M3U_CLEANUP,
   "Säubere M3U-Einträge: "
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_END,
   "Scan abgeschlossen: "
   )
MSG_HASH(
   MSG_CORE_BACKUP_SCANNING_CORE,
   "Scanne Core: "
   )
MSG_HASH(
   MSG_CORE_BACKUP_ALREADY_EXISTS,
   "Sicherung des installierten Cores existiert bereits: "
   )
MSG_HASH(
   MSG_BACKING_UP_CORE,
   "Sichere Core: "
   )
MSG_HASH(
   MSG_PRUNING_CORE_BACKUP_HISTORY,
   "Entferne veraltete Backups: "
   )
MSG_HASH(
   MSG_CORE_BACKUP_COMPLETE,
   "Core-Backup erstellt: "
   )
MSG_HASH(
   MSG_CORE_RESTORATION_ALREADY_INSTALLED,
   "Ausgewählte Core-Sicherung ist bereits installiert: "
   )
MSG_HASH(
   MSG_RESTORING_CORE,
   "Wiederherstellen des Cores: "
   )
MSG_HASH(
   MSG_CORE_RESTORATION_COMPLETE,
   "Core-Wiederherstellung abgeschlossen: "
   )
MSG_HASH(
   MSG_CORE_INSTALLATION_ALREADY_INSTALLED,
   "Ausgewählte Core-Datei ist bereits installiert: "
   )
MSG_HASH(
   MSG_INSTALLING_CORE,
   "Installiere Core: "
   )
MSG_HASH(
   MSG_CORE_INSTALLATION_COMPLETE,
   "Core Installation abgeschlossen: "
   )
MSG_HASH(
   MSG_CORE_RESTORATION_INVALID_CONTENT,
   "Ungültige Core-Datei ausgewählt: "
   )
MSG_HASH(
   MSG_CORE_BACKUP_FAILED,
   "Core-Backup fehlgeschlagen: "
   )
MSG_HASH(
   MSG_CORE_RESTORATION_FAILED,
   "Core-Wiederherstellung fehlgeschlagen: "
   )
MSG_HASH(
   MSG_CORE_INSTALLATION_FAILED,
   "Core-Installation fehlgeschlagen: "
   )
MSG_HASH(
   MSG_CORE_RESTORATION_DISABLED,
   "Core-Wiederherstellung deaktiviert - Core ist gesperrt: "
   )
MSG_HASH(
   MSG_CORE_INSTALLATION_DISABLED,
   "Core-Installation deaktiviert - Core gesperrt: "
   )
MSG_HASH(
   MSG_CORE_LOCK_FAILED,
   "Fehler beim Sperren des Cores: "
   )
MSG_HASH(
   MSG_CORE_UNLOCK_FAILED,
   "Fehler beim Entsperren des Cores: "
   )
MSG_HASH(
   MSG_CORE_SET_STANDALONE_EXEMPT_FAILED,
   "Fehler beim Entfernen des Cores aus der Liste „Inhaltslose Cores“: "
   )
MSG_HASH(
   MSG_CORE_UNSET_STANDALONE_EXEMPT_FAILED,
   "Fehler beim Hinzufügen des Cores zur Liste „Inhaltslose Cores“: "
   )
MSG_HASH(
   MSG_CORE_DELETE_DISABLED,
   "Löschen des Cores deaktiviert - Core gesperrt: "
   )
MSG_HASH(
   MSG_UNSUPPORTED_VIDEO_MODE,
   "Nicht unterstützter Video-Modus"
   )
MSG_HASH(
   MSG_CORE_INFO_CACHE_UNSUPPORTED,
   "Kann nicht in das Core-Informationen-Verzeichnis schreiben - Core-Informationen-Cache wird deaktiviert"
   )
MSG_HASH(
   MSG_FOUND_ENTRY_STATE_IN,
   "Eintragsstatus gefunden in"
   )
MSG_HASH(
   MSG_LOADING_ENTRY_STATE_FROM,
   "Eintragsstatus wird geladen aus"
   )
MSG_HASH(
   MSG_FAILED_TO_ENTER_GAMEMODE,
   "GameMode kann nicht aufgerufen werden"
   )
MSG_HASH(
   MSG_FAILED_TO_ENTER_GAMEMODE_LINUX,
   "GameMode kann nicht aufgerufen werden - stelle sicher, dass der GameMode-Daemon installiert ist/läuft"
   )
MSG_HASH(
   MSG_VRR_RUNLOOP_ENABLED,
   "Synchronisation mit exakter Inhaltssignalfrequenz aktiviert."
   )
MSG_HASH(
   MSG_VRR_RUNLOOP_DISABLED,
   "Synchronisation mit exakter Inhaltssignalfrequenz deaktiviert."
   )

/* Lakka */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_LAKKA,
   "Lakka aktualisieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FRONTEND_NAME,
   "Frontend-Name"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_LAKKA_VERSION,
   "Lakka-Version"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REBOOT,
   "Neustart"
   )

/* Environment Specific Settings */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_SPLIT_JOYCON,
   "Joy-Con teilen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WIDGET_SCALE_FACTOR,
   "Skalierungsüberschreibung für Grafik-Widgets"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WIDGET_SCALE_FACTOR,
   "Beim Zeichnen von Anzeige-Widgets eine manuelle Überschreibung des Skalierungsfaktors anwenden. Gilt nur, wenn \"Grafik-Widgets automatisch skalieren\" deaktiviert ist. Kann verwendet werden, um die Größe dekorierter Benachrichtigungen, Anzeigen und Steuerelemente unabhängig vom Menü selbst zu erhöhen oder zu verringern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCREEN_RESOLUTION,
   "Bildschirmauflösung"
   )
MSG_HASH(
   MSG_SCREEN_RESOLUTION_DEFAULT,
   "Bildschirmauflösung: Standard"
   )
MSG_HASH(
   MSG_SCREEN_RESOLUTION_NO_DESC,
   "Bildschirmauflösung: %dx%d"
   )
MSG_HASH(
   MSG_SCREEN_RESOLUTION_DESC,
   "Bildschirmauflösung: %dx%d - %s"
   )
MSG_HASH(
   MSG_SCREEN_RESOLUTION_APPLYING_DEFAULT,
   "Angewendet: Standard"
   )
MSG_HASH(
   MSG_SCREEN_RESOLUTION_APPLYING_NO_DESC,
   "Angewendet: %dx%d\nSTART zum Zurücksetzen"
   )
MSG_HASH(
   MSG_SCREEN_RESOLUTION_APPLYING_DESC,
   "Angewendet: %dx%d - %s\nSTART zum Zurücksetzen"
   )
MSG_HASH(
   MSG_SCREEN_RESOLUTION_RESETTING_DEFAULT,
   "Wiederhergestellt: Standard"
   )
MSG_HASH(
   MSG_SCREEN_RESOLUTION_RESETTING_NO_DESC,
   "Wiederhergestellt: %dx%d"
   )
MSG_HASH(
   MSG_SCREEN_RESOLUTION_RESETTING_DESC,
   "Wiederhergestellt: %dx%d - %s"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCREEN_RESOLUTION,
   "Anzeigemodus wählen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHUTDOWN,
   "Beenden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FILE_BROWSER_OPEN_UWP_PERMISSIONS,
   "Externen Dateizugriff ermöglichen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FILE_BROWSER_OPEN_UWP_PERMISSIONS,
   "Die Einstellungen für die Windows-Dateizugriffsberechtigungen öffnen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_OPEN_UWP_PERMISSIONS,
   "Die Windows-Berechtigungseinstellungen öffnen, um die Option broadFileSystemAccess zu aktivieren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FILE_BROWSER_OPEN_PICKER,
   "Öffnen..."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FILE_BROWSER_OPEN_PICKER,
   "Ein anderes Verzeichnis mit der Systemdateiauswahl öffnen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FILTER_FLICKER,
   "Flacker-Filter aktivieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_GAMMA,
   "Gamma"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SOFT_FILTER,
   "Soft-Filter aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BLUETOOTH_SETTINGS,
   "Nach Bluetooth-Geräten suchen und mit ihnen verbinden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_WIFI_SETTINGS,
   "WLAN"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_WIFI_SETTINGS,
   "Nach drahtlosen Netzwerken suchen und mit ihnen verbinden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_WIFI_ENABLED,
   "WLAN aktivieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_WIFI_NETWORK_SCAN,
   "Mit Netzwerk verbinden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_WIFI_NETWORKS,
   "Mit Netzwerk verbinden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_WIFI_DISCONNECT,
   "Verbindung trennen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VFILTER,
   "Entflackern"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VI_WIDTH,
   "VI-Bildgröße"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_OVERSCAN_CORRECTION_TOP,
   "Overscan-Korrektur (oben)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_OVERSCAN_CORRECTION_TOP,
   "Das Zuschneiden des Overscans anpassen, indem die Bildgröße um die angegebene Anzahl von Scanlinien (vom oberen Bildschirmrand) reduziert wird. Kann Skalierungsartefakte verursachen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_OVERSCAN_CORRECTION_BOTTOM,
   "Overscan-Korrektur (unten)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_OVERSCAN_CORRECTION_BOTTOM,
   "Das Zuschneiden des Overscans anpassen, indem die Bildgröße um die angegebene Anzahl von Scanlinien (vom unteren Bildschirmrand) reduziert wird. Kann Skalierungsartefakte verursachen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SUSTAINED_PERFORMANCE_MODE,
   "Dauerleistungsmodus"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERFPOWER,
   "CPU-Leistung und -Verbrauch"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_POLICY_ENTRY,
   "Richtlinie"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERF_MODE,
   "Reglermodus"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERF_MODE_MANUAL,
   "Manuell"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VALUE_CPU_PERF_MODE_MANUAL,
   "Ermöglicht das manuelle Anpassen aller Details in jeder CPU: Regler, Frequenzen usw. Nur für fortgeschrittene Benutzer empfohlen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERF_MODE_MANAGED_PERF,
   "Leistung (verwaltet)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VALUE_CPU_PERF_MODE_MANAGED_PERF,
   "Standard und empfohlener Modus. Maximale Leistung beim Abspielen, während Strom gespart wird, wenn die Wiedergabe pausiert oder die Menüs durchsucht werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERF_MODE_MANAGED_PER_CONTEXT,
   "Individuell verwaltet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VALUE_CPU_PERF_MODE_MANAGED_PER_CONTEXT,
   "Ermöglicht die Auswahl der Regler, die in Menüs und während des Spiels verwendet werden sollen. Performance, Ondemand oder Schedutil werden während des Spiels empfohlen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERF_MODE_MAX_PERF,
   "Maximale Leistung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VALUE_CPU_PERF_MODE_MAX_PERF,
   "Immer maximale Leistung: höchste Frequenzen für bestes Erlebnis."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERF_MODE_MIN_POWER,
   "Minimaler Verbrauch"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VALUE_CPU_PERF_MODE_MIN_POWER,
   "Die niedrigste verfügbare Frequenz verwenden, um Strom zu sparen. Nützlich bei batteriebetriebenen Geräten, aber die Leistung wird deutlich reduziert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERF_MODE_BALANCED,
   "Ausgewogen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VALUE_CPU_PERF_MODE_BALANCED,
   "Passt sich der aktuellen Auslastung an. Funktioniert mit den meisten Geräten und Emulatoren gut und hilft, Strom zu sparen. Anspruchsvolle Spiele und Cores können auf manchen Geräten einen Leistungsabfall erleiden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_POLICY_MIN_FREQ,
   "Minimale Frequenz"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_POLICY_MAX_FREQ,
   "Maximale Frequenz"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_MANAGED_MIN_FREQ,
   "Minimale Kern-Frequenz"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_MANAGED_MAX_FREQ,
   "Maximale Kern-Frequenz"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_POLICY_GOVERNOR,
   "CPU-Regler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_POLICY_CORE_GOVERNOR,
   "Kern-Regler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_POLICY_MENU_GOVERNOR,
   "Menü-Regler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAMEMODE_ENABLE,
   "Spielmodus"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GAMEMODE_ENABLE_LINUX,
   "Kann die Leistung verbessern, die Latenzzeit verringern und Audio-Crackling beheben. Die Komponente https://github.com/FeralInteractive/gamemode wird hierzu benötigt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_GAMEMODE_ENABLE,
   "Das Aktivieren von Linux GameMode kann die Latenzzeit verbessern, Audioknackser beheben und die Gesamtleistung maximieren, indem CPU und GPU automatisch für die beste Leistung konfiguriert werden.\nDie GameMode-Software muss installiert sein, damit dies funktioniert. Siehe https://github.com/FeralInteractive/gamemode für Informationen zur Installation von GameMode."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PAL60_ENABLE,
   "Verwende PAL60-Modus"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_RESTART_KEY,
   "RetroArch neu starten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_RESTART_KEY,
   "RetroArch beenden und neu starten. Erforderlich, um bestimmte Menüeinstellungen zu aktivieren (z. B. beim Ändern des Menütreibers)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_BLOCK_FRAMES,
   "Warte auf Audio-Frames"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_PREFER_FRONT_TOUCH,
   "Touch-Eingabe auf der Vorderseite bevorzugen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_INPUT_PREFER_FRONT_TOUCH,
   "Den vorderen statt den hinteren Touchscreen nutzen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TOUCH_ENABLE,
   "Touch-Eingabe aktivieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ICADE_ENABLE,
   "Tastatur-Controller-Zuordnung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_KEYBOARD_GAMEPAD_MAPPING_TYPE,
   "Tastatur-Controller-Zuordnungstyp"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_SMALL_KEYBOARD_ENABLE,
   "Kleine Tastatur aktivieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BLOCK_TIMEOUT,
   "Eingabe-Block-Timeout"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_BLOCK_TIMEOUT,
   "Anzahl an Millisekunden, die gewartet werden, bevor eine vollständige Eingabe getätigt wird. Verwende diese Option, wenn Probleme beim gleichzeitigen Drücken von Tasten auftreten (nur Android)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_REBOOT,
   "\"Neustart\" anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_REBOOT,
   "Die Option \"Neustart\" anzeigen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_SHUTDOWN,
   "Zeige 'Beenden'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_SHUTDOWN,
   "Zeige die Option 'Beenden'."
   )
MSG_HASH(
   MSG_ROOM_PASSWORDED,
   "Passwortgeschützt"
   )
MSG_HASH(
   MSG_INTERNET_NOT_CONNECTABLE,
   "Internet (nicht verbindbar)"
   )
MSG_HASH(
   MSG_LOCAL,
   "Lokal"
   )
MSG_HASH(
   MSG_READ_WRITE,
   "Interner Speicherstatus: Lesen/Schreiben"
   )
MSG_HASH(
   MSG_READ_ONLY,
   "Interner Speicherstatus: Schreibgeschützt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BRIGHTNESS_CONTROL,
   "Bildschirmhelligkeit"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BRIGHTNESS_CONTROL,
   "Bildschirmhelligkeit erhöhen oder verringern."
   )

#ifdef HAVE_LAKKA_SWITCH
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SWITCH_GPU_PROFILE,
   "GPU Übertakten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SWITCH_GPU_PROFILE,
   "Über- oder Untertakten der Switch GPU."
   )
#endif
#if defined(HAVE_LAKKA_SWITCH) || defined(HAVE_LIBNX)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SWITCH_CPU_PROFILE,
   "CPU Übertakten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SWITCH_CPU_PROFILE,
   "Übertakten der Switch CPU."
   )
#endif
#ifdef HAVE_LAKKA
MSG_HASH(
   MENU_ENUM_SUBLABEL_BLUETOOTH_ENABLE,
   "Aktiviere oder deaktiviere Bluetooth."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LAKKA_SERVICES,
   "Dienste"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SERVICES_SETTINGS,
   "Betriebssystem-Dienste verwalten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAMBA_ENABLE,
   "SAMBA aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAMBA_ENABLE,
   "Freigegebene Ordner per SMB-Protokoll teilen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SSH_ENABLE,
   "SSH aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SSH_ENABLE,
   "Aktiviere Fernzugriff auf die Kommandozeile."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOCALAP_ENABLE,
   "Wi-Fi-Zugangspunkt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOCALAP_ENABLE,
   "Wi-Fi Access Point aktivieren oder deaktivieren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEZONE,
   "Zeitzone"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_TIMEZONE,
   "Zeitzone wählen, um Datum und Zeit an Ihren Standort anzupassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_TIMEZONE,
   "Zeigt eine Liste der verfügbaren Zeitzonen an. Nach Auswahl einer Zeitzone werden Zeit und Datum an die gewählte Zeitzone angepasst. Es wird davon ausgegangen, dass die System-/Hardware-Uhr auf UTC eingestellt ist."
   )
MSG_HASH(
   MSG_LOCALAP_SWITCHING_OFF,
   "Wi-Fi Access Point wird ausgeschaltet."
   )
MSG_HASH(
   MSG_WIFI_DISCONNECT_FROM,
   "Trenne von Wi-Fi '%s'"
   )
MSG_HASH(
   MSG_WIFI_CONNECTING_TO,
   "Verbinde mit WLAN '%s'"
   )
MSG_HASH(
   MSG_WIFI_EMPTY_SSID,
   "[Keine SSID]"
   )
MSG_HASH(
   MSG_LOCALAP_ALREADY_RUNNING,
   "Wi-Fi Access Point ist bereits gestartet"
   )
MSG_HASH(
   MSG_LOCALAP_NOT_RUNNING,
   "Wi-Fi Access Point wird nicht ausgeführt"
   )
MSG_HASH(
   MSG_LOCALAP_STARTING,
   "Starte Wi-Fi Access Point mit SSID=%s und Passwort=%s"
   )
MSG_HASH(
   MSG_LOCALAP_ERROR_CONFIG_CREATE,
   "Konnte die Wi-Fi Access Point Konfigurationsdatei nicht erstellen."
   )
MSG_HASH(
   MSG_LOCALAP_ERROR_CONFIG_PARSE,
   "Falsche Konfigurationsdatei - APNAME oder PASSWORD in %s nicht gefunden"
   )
#endif
#ifdef GEKKO
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_SCALE,
   "Maus-Skala"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_MOUSE_SCALE,
   "X/Y-Skala für Wiimote Lichtpistolengeschwindigkeit anpassen."
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TOUCH_SCALE,
   "Touchscreen-Skalierung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_TOUCH_SCALE,
   "Die x/y-Skalierung der Touchscreen-Koordinaten an die Anzeigenskalierung des Betriebssystems anpassen."
   )
#ifdef HAVE_ODROIDGO2
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RGA_SCALING,
   "RGA-Skalierung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_RGA_SCALING,
   "RGA-Skalierung und bikubischer Filter. Kann Fehler bei Widgets verursachen."
   )
#else
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_CTX_SCALING,
   "Kontextspezifische Skalierung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_CTX_SCALING,
   "Hardware-Kontextskalierung (falls verfügbar)."
   )
#endif
#ifdef _3DS
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NEW3DS_SPEEDUP_ENABLE,
   "New3DS-Taktfrequenz / -L2-Cache aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NEW3DS_SPEEDUP_ENABLE,
   "New3DS-Taktfrequenz (804MHz) und -L2-Cache aktivieren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_3DS_LCD_BOTTOM,
   "3DS-Bildschirm unten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_3DS_LCD_BOTTOM,
   "Statusanzeige auf dem unteren Bildschirm aktivieren. Deaktivieren, um die Akkulaufzeit zu erhöhen und die Leistung zu verbessern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_3DS_DISPLAY_MODE,
   "3DS Anzeigemodus"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_3DS_DISPLAY_MODE,
   "Wählt zwischen 3D- und 2D-Anzeigemodus. Im '3D' Modus sind Pixel quadratisch und ein Tiefeneffekt wird beim Anzeigen des Schnellmenüs angewendet. '2D' Modus bietet die beste Leistung."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CTR_VIDEO_MODE_2D_400X240,
   "2D (Pixel-Raster-Effekt)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CTR_VIDEO_MODE_2D_800X240,
   "2D (hohe Auflösung)"
   )
MSG_HASH(
   MSG_3DS_BOTTOM_MENU_DEFAULT,
   "Hier berühren, um das\nRetroArch-Menü\naufzurufen."
   )
MSG_HASH(
   MSG_3DS_BOTTOM_MENU_ASSET_NOT_FOUND,
   "Asset(s) nicht gefunden"
   )
MSG_HASH(
   MSG_3DS_BOTTOM_MENU_NO_STATE_DATA,
   "Keine\nDaten"
   )
MSG_HASH(
   MSG_3DS_BOTTOM_MENU_NO_STATE_THUMBNAIL,
   "Kein\nScreenshot"
   )
MSG_HASH(
   MSG_3DS_BOTTOM_MENU_RESUME,
   "Spiel fortsetzen"
   )
MSG_HASH(
   MSG_3DS_BOTTOM_MENU_SAVE_STATE,
   "Speicherpunkt\nerstellen"
   )
MSG_HASH(
   MSG_3DS_BOTTOM_MENU_LOAD_STATE,
   "Speicherpunkt\nladen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BOTTOM_ASSETS_DIRECTORY,
   "Unterer Bildschirm Asset-Verzeichnis"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BOTTOM_ASSETS_DIRECTORY,
   "Unterer Bildschirm Asset Verzeichnis. Verzeichnis muss \"bottom_menu.png\" enthalten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BOTTOM_FONT_ENABLE,
   "Schrift aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BOTTOM_FONT_ENABLE,
   "Text am unteren Bildschirm einblenden. Aktivieren, um Tastenbeschreibungen auf dem unteren Bildschirm anzuzeigen. Dies schließt das Speicherdatum aus."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BOTTOM_FONT_COLOR_RED,
   "Schriftfarbe Rot"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BOTTOM_FONT_COLOR_RED,
   "Rote Schriftfarbe auf unteren Bildschirm anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BOTTOM_FONT_COLOR_GREEN,
   "Schriftfarbe Grün"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BOTTOM_FONT_COLOR_GREEN,
   "Grüne Schriftfarbe auf unteren Bildschirm anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BOTTOM_FONT_COLOR_BLUE,
   "Schriftfarbe Blau"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BOTTOM_FONT_COLOR_BLUE,
   "Blaue Schriftfarbe auf unteren Bildschirm anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BOTTOM_FONT_COLOR_OPACITY,
   "Schriftfarbendeckkraft"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BOTTOM_FONT_COLOR_OPACITY,
   "Schriftdeckkraft auf unteren Bildschirm anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BOTTOM_FONT_SCALE,
   "Schriftgröße"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BOTTOM_FONT_SCALE,
   "Schriftgröße auf unteren Bildschirm anpassen."
   )
#endif
#ifdef HAVE_QT
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SCAN_FINISHED,
   "Scan abgeschlossen. <br><br>\nDas korrekte Scannen nach Inhalten erfordert, dass:\n<ul><li>ein kompatibler Core bereits heruntergeladen worden ist</li>\n<li>die Core-Infodateien aktualisiert wurden</li>\n<li>die Datenbanken aktualisiert wurden</li>\n<li>RetroArch nach dem Ausführen jeglicher der oberen Punkte neu gestartet wurde.</li></ul>\nSchließlich muss der Inhalt mit den <a href=\"https://docs.libretro.com/guides/roms-playlists-thumbnails/#sources\">Datenbanken von hier</a> übereinstimmen. Falls es immer noch nicht funktioniert, kann <a href=\"https://www.github.com/libretro/RetroArch/issues\">hier ein Fehlerbericht erstattet werden</a>."
   )
#endif
MSG_HASH(
   MSG_IOS_TOUCH_MOUSE_ENABLED,
   "Mauseingabe per Touchscreen ist aktiviert"
   )
MSG_HASH(
   MSG_IOS_TOUCH_MOUSE_DISABLED,
   "Mauseingabe per Touchscreen ist deaktiviert"
   )
