<p align="center">
  <img src="https://kneelawk.com/assets/logo_256.png" alt="KLauncher logo"/>
</p>

KLauncher
=======

KLauncher is a custom, MultiMC-based launcher for Minecraft.

### KLauncher is a Fork
KLauncher is a fork of MultiMC. As such, issues with KLauncher should **not** be brought to MultiMC developers unless the issue **also** appears in MultiMC, in which case the issue should be brought irrespective of KLauncher and KLauncher should not be mentioned in the issue.

### Building
If you want to build the launcher yourself, check [BUILD.md](BUILD.md) for build instructions.

## License
Copyright &copy; 2013-2022 MultiMC Contributors,

Licensed under the Apache License, Version 2.0 (the "License"); you may not use this program except in compliance with the License. You may obtain a copy of the License at [http://www.apache.org/licenses/LICENSE-2.0](http://www.apache.org/licenses/LICENSE-2.0).

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.

## Forking/Redistributing/Custom builds policy
KLauncher is a fork of MultiMC and is open-source under the Apache license, just like MultiMC.

Like with MultiMC, the license gives you access to the source KLauncher is build from, but not:
- The name, logo and other branding.
- The API tokens required to talk to services the launcher depends on.

Because of the nature of the agreements required to interact with the Microsoft identity platform, it's impossible for me to allow people to build the code as 'KLauncher'. The source code has been debranded and now builds as `DevLauncher` by default.

You must provide your own branding if you want to distribute your own builds.

You will also have to register your own app on Azure to be able to handle Microsoft account logins.
