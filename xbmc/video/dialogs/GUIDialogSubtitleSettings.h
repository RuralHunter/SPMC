#pragma once

/*
 *      Copyright (C) 2005-2014 Team XBMC
 *      http://kodi.tv
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include <string>
#include <utility>
#include <vector>

#include "settings/dialogs/GUIDialogSettingsManualBase.h"
#include "cores/VideoPlayer/Interface/StreamInfo.h"

class CVariant;

class CGUIDialogSubtitleSettings : public CGUIDialogSettingsManualBase
{
public:
  CGUIDialogSubtitleSettings();
  ~CGUIDialogSubtitleSettings();

  // specialization of CGUIWindow
  void FrameMove();

  static std::string BrowseForSubtitle();

protected:
  // implementations of ISettingCallback
  virtual void OnSettingChanged(const CSetting *setting);
  virtual void OnSettingAction(const CSetting *setting);

  // specialization of CGUIDialogSettingsBase
  bool AllowResettingSettings() const { return false; }
  void Save();
  void SetupView();

  // specialization of CGUIDialogSettingsManualBase
  void InitializeSettings();

private:
  bool SupportsSubtitleFeature(int feature);

  void AddSubtitleStreams(CSettingGroup *group, const std::string &settingId);

  int m_subtitleStream;
  bool m_subtitleVisible;
  CSettingInt* m_subtitleStreamSetting;

  std::vector<int> m_subtitleCapabilities;

  static void SubtitleStreamsOptionFiller(const CSetting *setting, std::vector< std::pair<std::string, int> > &list, int &current, void *data);

  static std::string SettingFormatterDelay(const CSettingControlSlider *control, const CVariant &value, const CVariant &minimum, const CVariant &step, const CVariant &maximum);
};
